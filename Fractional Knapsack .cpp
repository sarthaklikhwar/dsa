#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  vi vector<int>
#define pii pair<int,int>
#define vii vector<pii> 
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
bool compare(pii p1,pii p2){
    double v1=(double) p1.ff/p1.ss;
    double v2=(double) p2.ff/p2.ss;

    return v1>v2;
}

signed main() 
{
int n;
cin>>n;
vii a(n);
for(int i=0;i<n;i++){
    cin>>a[i].ff>>a[i].ss;
}
int w;
cin>>w;
sort(a.begin(),a.end(),compare);
int ans=0;

for(int i=0;i<n;i++){
    if(w>=a[i].ss){
        ans+=a[i].ff;
        w-=a[i].ss;
        continue;
    }
    double vw=a[i].ff/a[i].ss;
    ans+=vw*w;

    w=0;
    break;
}

cout<<ans<<endl;
return 0 ;
}