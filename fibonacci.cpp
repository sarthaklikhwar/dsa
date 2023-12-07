#include <iostream>
#include <iomanip>
using namespace std;
// 0 1 1 2 3 5 8 13
int fib(int num){
    int t1=0;
    int t2=1;
    int next;
    for(int i;i<num;i++){
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
}


int fact(int m){
    int factorial=1;
    for(int i=2;i<=m;i++){
        factorial*=i;
    } 
    cout<< factorial<<endl;
}
int main(){
    int n,k;
    cin>>n>>k;
    //fib(n);
    fact(k);

    return 0;
}