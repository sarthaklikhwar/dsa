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
    int n;  // n has to be even since questions states that array has to split into exactly 2 halves.
    cin>>n;
    vi a(n);
    for(auto &i:a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    ll  mx=0;
    ll  mn=0;
    for(int i=0;i<n/2;i++){
        mx+=(a[i+n/2]-a[i]);
        mn+=(a[2*i+1]-a[2*i]);
    }

    cout<<mx<<" "<<mn<<endl;
return 0 ;
}