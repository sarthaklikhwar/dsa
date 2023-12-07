#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
#define n 100
//FIFO
class Queue{
  int* arr;
  int front;
  int back;
  public:
  Queue(){
    arr=new int[n];
    front=-1;
    back=-1;
  }
  void push(int x){
    if(back==n-1){
        cout<<"Queue is over flow"<<endl;
        return ;
    }
    back++;
    arr[back]=x;

    if(front==-1){
        front++;
    }
  }
  void pop(){
    if(front==-1 || front>back){
        cout<<"Queue is empty"<<endl;
        return;
    }
    front++;
  }
 int peek(){
    if(front==-1 || front>back){
        return -1;
    }
    return arr[front];
 }
 bool empty(){
    if(front==-1||front>back){
        return 1;
    }
    return 0;
 } 
 };


signed main() 
{
    class Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;;
    cout<<q.empty()<<endl;
return 0 ;
}