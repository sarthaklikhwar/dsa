#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n){

    if(n==1){
        return true;
    }
    bool restarray=check(arr+1,int (n-1));
    return arr[0]<arr[1] && restarray;

}

int dec(int k){
    if(k>1){
    cout<< k<<endl;
    return dec(k-1);
    
    }

    else{
        return 1;
    }

}

int inc(int j,int x){

    if(x<j){
        cout<<x<<endl;
        return inc(j,x+1);
    }

    else if(x==j){
        return j;
    }   
}

int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }

    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n, int i,int key){
    if(i==-1){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return lastocc(arr,n,i-1,key);
}

int main(){
    int arr[5]={1,3,2,2,8};
    //cout<<check(arr,5);
    int k=7;
    //cout<<dec(k);
    int j=9;
    //cout<<inc(j,1);

    cout<<firstocc(arr,5,0,2)<<endl;
    cout<<lastocc(arr,5,4,2)<<endl;
    
    return 0;
}

