#pragma once
class ArrayClass
{
protected:
	int* A, N, tail;
public:
	ArrayClass() {
		N = 10;
		tail = 0;
		A = new int[N];
	}
	~ArrayClass();
	bool Insertlast(int X) {
		float occupancy = tail / N * 100;
		if (occupancy > 95) {
			Grow();
		}
		A[tail++] = X;
		return true;

	}

	bool InsertAt(int X, int index) {
		float occupancy = tail / N * 100;
		if (occupancy > 95) {
			Grow();
		}
		for (int i = tail; i > index; i++) {
			A[i] = A[i - 1];//right shift each element until Index
		}
		//Now index can be overwritten
		A[index] = X;
		tail++;
		return true;
	}

	bool InsertFirst(int X){}//etc

	int Search(int key) {
		for (int i = 0; i < tail; i++){
			if (A[i] == key) return i;
		}
		return -1;
	}

	int SearchCount(int key) {
		int Count = 0;
		for (int i = 0; i < tail; i++) {
			if (A[i] == key) Count++;

		}
		return Count;
	}

	int SearchAllIndexes(int key, int Indexes[]) {
		int Count = 0;
		for (int i = 0; i < tail; i++) {
			if (A[i] == key) {
				Count++;
				Indexes[Count++] = i;
			}
		}
		return Count;
	}

	bool SearchAndModifyFirst(int oldVal, int newVal) {
		for (int i = 0; i < tail; i++) {
			if (A[i] == oldVal) {
				A[i] = newVal;
				return true;
			}
		}
	}

	bool SearchAndModifyAll(int oldVal, int newVal) {
		int Count = 0;
		for (int i = 0; i < tail; i++) {
			if (A[i] == oldVal) {
				A[i] = newVal;
				Count++;
			}
		}
		return Count;
	}
	
	bool SearchAndDelete(int key) {//efficient function khus likhna
		int i = 0;
		for (; i < tail; i++) {
			if (A[i] == key) break;
		}
		if (i == tail) { return false; }
		for (; i, tail-1; i++) {
			A[i] = A[i + 1];//deletion in array means left shifting upto end
		}
		tail--;
		return true;
	}

	bool Grow() {
		N *= 2;//divide N on 2 for shriking
		int* B = new int[N];
		for (int i = 0; i < tail; i++) {
			B[i] = A[i];
		}
		delete A;
		A = B;
	}
};

