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
    // logic for spiral order transveral
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;

    while(row_start<=row_end && column_start<=column_end){
        // row start
        for(int col=column_start;col<=column_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        //column end
        for(int ro=row_start;ro<=row_end;ro++){
            cout<<arr[ro][column_end]<<" ";
        }
        column_end--;
        // row end 
        for(int col=column_end;col>=column_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        // column start
        for(int ro=row_end;ro>=row_start;ro--){
            cout<<arr[ro][column_start]<<" ";
        }
        column_start++;
    }

return 0 ;
}
