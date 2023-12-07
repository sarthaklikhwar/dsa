#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
signed main() 
{
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int,vector<int>, greater<int> > minheap;
    for(int i=0;i<n;i++){
        minheap.push(a[i]);
    }
    int ans=0;
    while(minheap.size()>1){
        int e1=minheap.top();
        minheap.pop();
        int e2=minheap.top();
        minheap.pop();

        ans+=e1+e2;

        minheap.push(e1+e2);
    }

    cout<<ans<<endl;

return 0 ;
}