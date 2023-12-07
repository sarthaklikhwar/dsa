#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m,key;
    cin>>n>>m>>key;
    bool found=true;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int c=0,m=n-1;
    while(c<n &&m>=0){
        if(arr[c][m]==key){
            found=false;
        }
        else if(arr[c][m]>key){
            m--;
        }
        else{
            c++;
        }
    }

    if(found){
        cout<<"element exist"<<endl;
    }
    else{
        cout<<"element does not exist"<<endl;
    }
        
return 0 ;
}


//linear search
//for(int i=0;i<n;i++){
        //for(int j=0;j<m;j++){
            //if(arr[i][j]==x){
                //cout<<"elemnt found at  "<<i<<" "<<j;
            //}
        //}