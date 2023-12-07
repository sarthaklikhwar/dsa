#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// the time complexity of this is O(n*n!).
void permute(string s,int l,int r){
    if(l==r){
        cout<<(s)<<endl;
    }

    else{

    
    for(int i=l;i<=r;i++){
        swap(s[l],s[i]);
        permute(s,l+1,r);  
        swap(s[l],s[i]);   // this is an example of back tracking,it is used to make the orginal string again.

    }
    }
}

int matrix(int a,int b){
    if(a==1 || b==1){
        return 1;
    }

   return  matrix(a-1,b)+matrix(a,b-1);
}

int josephus(int j,int k){
    if(j==1){
        return 0;
    }

    return (josephus(j-1,k)+k)%j;
}
int main() 
{
    string s;
    cin>>s;
    permute(s,0,2);
    //ll n,m;
    //cin>>n>>m;
    //cout<<matrix(n,m);

    //int j,k;
    //cin>>j>>k;
    //cout<<josephus(j,k);
 
return 0 ;
}