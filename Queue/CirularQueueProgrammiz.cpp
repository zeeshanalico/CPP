#include <iostream>
#define n 20
using namespace std;
class Queue
{
private:
    int arr[n];
    int front;
    int back;
public:
    Queue(){
        front = -1;
        back = -1;
    }
    bool isFull(){
        if (front == 0 && back == n - 1){
            return true;
        }
        if (front == back + 1){
            return true;
        }
        return false;
    }
    // Check if the queue is empty
    bool isEmpty(){
        if (front == -1 || front>back)
            return true;
        else
            return false;
    }
    // Adding an element
    void enQueue(int x)
    {
        if (isFull()){
            cout << "Queue is full";
        }
        else{
            back = (back + 1) % n;
            arr[back] = x;
        }
        if(front==-1){
            front++;
        }
    }
    // Removing an x
    int deQueue(){
        if (isEmpty()){
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else
        {
           int x = arr[front];
            if (front == back){// Q has only one element, so we reset the queue after deleting it.
                front = -1;
                back = -1;
            }
            else{
                front = (front + 1) % n;
            }
            return x;
        }
    }

    void display()
    {
        // Function to display status of Circular Queue
        int i;
        if (isEmpty()){
            cout << endl<< "Empty Queue" << endl;
        }
        else{
            cout << "Front -> " << front;
            cout << endl<< "arr -> ";
            for (i = front; i != back; i = (i + 1) % n)
                cout << arr[i];
                cout << arr[i];
                cout << endl
                 << "back -> " << back;
        }
    }
};

int main()
{
    Queue q;
    // Fails because front = -1
    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // Fails to enqueue because front == 0 && back == n - 1
    q.enQueue(6);

    q.display();

    int elem = q.deQueue();

    if (elem != -1)
        cout << endl
             << "Deleted x is " << elem;

    q.display();

    q.enQueue(7);

    q.display();

    // Fails to enqueue because front == back + 1
    q.enQueue(8);

    return 0;
}