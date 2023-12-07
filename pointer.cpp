#include <bits/stdc++.h>
using namespace std;
int main() 
{

    int a=10;
    int *aptr=&a;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    //cout<<*aptr<<endl;



    //pointer arithmetic

    char b='a';
    char *charaptr=&b;
    cout<<charaptr<<endl;
    charaptr++;
    cout<<charaptr<<endl;
    //cout<<*charaptr<<endl;

// pointers using arrays
    int arr[]={10,20,30};

    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<" "<<ptr<<endl;      //*ptr is called de-reference. *arr is same as *ptr
        ptr++;
    }


    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;     //we do not add 4 because this represnt the index of array not the location .
    }                            //*arr++ is illegal.


    //pointers of pointers

    int **q=&aptr;
    cout<<*q<<endl;
    cout<<**q<<endl;

    int ***r=&q;
    cout<<*q<<endl;
return 0 ;
}