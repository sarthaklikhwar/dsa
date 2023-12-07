#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int primeSieve(int n){
    int prime[100]={0};

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<endl;
        }
    }
}

void primefactors(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                spf[j]=i;
            }
        }
    }

    while(n!=1){
        cout<<spf[n]<<endl;
        n=n/spf[n];
    }
}
int main() 
{
    int n;
    cin>>n;
    //primeSieve(n);
    primefactors(n);
return 0 ;
}