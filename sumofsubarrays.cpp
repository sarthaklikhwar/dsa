#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int count;
    for(int i=0;i<5;i++){
        count=0;
        for(int j=i;j<5;j++){
            count+=arr[j];
    cout<<"the sum of subarray is  "<<count<<endl;
            
        }
    }
    return 0;
}