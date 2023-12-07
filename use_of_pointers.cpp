#include <bits/stdc++.h>
using namespace std;
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() 
{
    // use of pointers for swaping two variables

    int a=10;
    int b=20;

    swap(&a,&b);
    cout<<"the swapped value of a and b is"<<endl;
    cout<<a<<" "<<b<<endl;
return 0 ;
}