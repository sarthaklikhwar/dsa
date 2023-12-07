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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vii a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].ff>>a[i].ss;
        }
        int l,p;
        cin>>l>>p;
        

        for(int i=0;i<n;i++){
            a[i].ff=l-a[i].ff;
        }
        sort(a.begin(),a.end());

        int ans=0;
        int curr=p;

        priority_queue<int,vector<int> > pq;
        bool final=0;
        
        for(int i=0;i<n;i++){
            if(curr>=l){
                break;
            }

            while(curr<a[i].ff){
                if(pq.empty()){
                    final=1;
                    break;
                }
                ans++;
                curr+=pq.top();
                pq.pop();
            }

            if(final){
                break;
            }
            pq.push(a[i].ss);
        }

        if(final){
            cout<<"-1"<<endl;
            continue;
        }

        while(!pq.empty() && curr<l){
            curr+=pq.top();
            pq.pop();
            ans++;
        }

        if(curr<l){
            cout<<"-1"<<endl;
            continue;
        }

        else{
            cout<<ans<<endl;
        }

    }
return 0 ;
}