#include <bits/stdc++.h>
using namespace std;
int kandane(int arr[],int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
        }
    return maxsum;
    }

int main()
{int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    int wrapsum;
    int nonwrapsum;
    int total=0;
    for(int j=0;j<n;j++){
        total+=arr[j];
        arr[j]=-arr[j];
    }
    nonwrapsum=kandane(arr,n);
    wrapsum=total+kandane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
return 0 ;
}