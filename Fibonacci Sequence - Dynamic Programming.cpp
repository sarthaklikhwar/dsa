#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
const int N=1e8+7;

signed main() 
{
    ll n;   //memoisation
    cin>>n;
    vi p(n+1);
    p[0]=0;
    p[1]=0;
    p[2]=1;
    for(int i=3;i<=n;i++){
        p[i]=p[i-1]+p[i-2];
    }

    cout<<p[n]<<endl;


    return 0 ;
}