#include<iostream>
using namespace std;
//multiple inheritence/in java we use interfaces for multiple inheritence
class A{
    public:
    void fun(){
        cout<<"this is class A";
    }
    protected:
    void funt(){
        cout<<"this is class A protect";
    }
};
class B{

};
class C:public B, public A{
    //public:
    // void fun(){//it will overhide the parent class fun()
    //     cout<<"this is class c";
    // }
};
int main(){
    C c;
    c.fun();
}