#include <bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int l){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==l){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>l){
            high--;
        }
        else{
            low++;
        }

    }
    return false;
}
int main() 
{
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    int ans=pairsum(arr,8,k);
    cout<<ans<<endl;
return 0 ;
}