#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int z=0;
    while(t--){
        z++;
        int n;
        cin>>n;
        int arr[n+1];
        arr[n]=-1;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<"Case #"<<z<<": "<<1<<endl;
            continue;
        }
        int ans=0;
        int mx=-1;
        for(int i=0;i<n+1;i++){
            if(mx<arr[i] && arr[i]>arr[i+1]){
                ans++;
                //cout<<arr[i]<<endl;
            }
            mx=max(mx,arr[i]);
        }
        
        cout<<"Case #"<<z<<": "<<ans<<endl;
    }
    return 0;
}