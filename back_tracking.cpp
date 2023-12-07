#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSafe(int** arr,int x,int y,int n){    // this will check that the current index is good or bad.
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratinmaze(int** arr,int x,int y,int n,int** solarr){
    if(x==n-1 && y==n-1){   //base condition
        solarr[x][y]=1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solarr[x][y]=1;
        if(isSafe(arr,x+1,y,n)){
            return true;
        }
        else if(isSafe(arr,x,y+1,n)){
            return true;
        }

        solarr[x][y]=0;  //backtracking
        return false;
    }
    return false;
}
int main() 
{
int n;
cin>>n;

int** arr=new int* [n];  //a way to create a dynamic 2D-array 
for(int i=0;i<n;i++){
    arr[i]=new int[n];
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
}
}
int** solarr=new int* [n];  //a way to create a dynamic 2D-array 
for(int i=0;i<n;i++){
    solarr[i]=new int[n];
    for(int j=0;j<n;j++){
        solarr[i][j]=0;
    }
}

if(ratinmaze(arr,0,0,n,solarr)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solarr[i][j]<<" ";
        }
        cout<<endl; 
    }
}


return 0 ;
}