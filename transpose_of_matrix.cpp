#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int swap=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=swap;
            
        }
    }

    cout<<"the transpose of the given matrix is"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0 ;
}