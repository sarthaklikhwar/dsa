#include <bits/stdc++.h>
using namespace std;
#define n 100
//LIFO
class Stack{
    int* arr;
    int top;
    public:
    Stack(){
        arr= new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack is full"<<endl;
        }
        else{
            top++;
            arr[top]=x;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"stack is emptyy"<<endl;
            return;
        }
        
        else{
            top--;
        }
    }

    int first(){
        if(top<0){
            cout<<"stack is Empty"<<endl;
            return -1;
        }
        else{
            int x=arr[top];
            return x;
        }
    }
    bool empty(){
        return (top<0);
    }
};


signed main() 
{
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.first()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    //s.pop();
    //s.pop();
    //s.pop();
    //s.pop();
    //s.pop();
    //s.pop();
    cout<<s.first()<<endl;
    cout<<s.empty()<<endl;;
    return 0 ;
}