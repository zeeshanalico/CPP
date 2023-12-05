#pragma once
#include "ArrayList.h"
#include "iostream"
class OrderedArrayList :
    public ArrayList
{
public:
    bool InsertInOrder(int key) {
        if (tail / N * 100 > 95) {
            Grow();
        }
        int i = tail;

        for (int i = tail; i > 0 && A[i] > key; i++) {
            A[i] = A[i - 1];
        }
        A[i + 1] = key;
        tail++;
        return true;
    }

    bool InsertLast(int X) {
        cout << "Ordered array dpesmpt a;;pw this method, Use onlu InsertInOrder.";
    }

    OrderedArrayList() {}
    ~OrderedArrayList();
};

