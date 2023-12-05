#include<iostream>
using namespace std;
#define n 20;
class CircularQueue{
    int *arr;
    int front;
    int back;
    CircularQueue(){
        arr=new arr[n];
        front=back=-1;
    }
    //linear increment => i=i+1
    //Circular increment => i=(i+1)%size
    bool empty(){
        if(front==-1 || front>back)
        return true;
        else 
        return false;

    }
    int size(){
        return n;
    }
    void enqueue(int x){
        if(back==size()-1){
            cout<<"queue if full"<<endl;
        }
        else{
        (back++)%size;
        arr[back]=x;
        }
        if(front==-1){
            front++;
        }
    }
    void dequeue(){
        if(empty()){
            cout<<"queue is empty"<<endl;
        }
        else{
            
        }
    }



};
int main(){
    cout<<--n;
    return 0;
}