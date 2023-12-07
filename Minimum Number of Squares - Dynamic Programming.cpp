#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
const  int  N=1e5+2;
const int  Mod=1e9+7;
int dp[N];   //tabulation
int minsquare(int n){
    if(n==0 || n==1 || n==2 || n==3){
        return n;
    }
    if(dp[n]!=Mod){
        return dp[n];
    }
    for(int i=1;i*i<=n;i++){
        dp[n]=min(dp[n],1+minsquare(n-i*i));
    }

    return dp[n];
}
signed main() 
{
    int n;
    cin>>n;
    for(int i=0;i<N;i++){
        dp[i]=Mod;
    }
    cout<<minsquare(n)<<endl;
    return 0 ;
}