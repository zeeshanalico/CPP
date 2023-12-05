#pragma once
#include "ArrayClass.h"

class ArrayList :
    public ArrayClass
{
    int Current;
public:
    ArrayList() {
        Current = -1;
    }
    //cursor movement functions
    bool MoveNext() { Current++; return true; }
    bool MovePrev() { Current++; return true; }
    bool MoveFirst() { Current = 0; }
    bool MoveLast() { Current = tail - 1; }
    bool MoveAt(int Index) { Current = Index; }
    //data access members
    bool set(int X) {
        A[Current] = X;
        return true;
    }
    //setNext, setPrev, INsert,InsertNext, InsertPrev, delete, Deletenext,
    //deletePrec etc
    ~ArrayList();
};

