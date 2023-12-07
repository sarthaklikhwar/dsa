#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string permutation (string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return " ";
    }

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
}

int pathcount(int s,int e){
    if(s==e){
        return 1;
    }

    if(s>e){
        return 0;
    }

    int counter=0;
    for(int i=1;i<=6;i++){
        counter+=pathcount(s+i,e);
    }

    return counter;
}


int maze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return maze(n,i+1,j)+maze(n,i,j+1);
}

int main() 
{
   //permutation("ABC"," ");
   //cout<<pathcount(0,3)<<endl;
   cout<<maze(3,0,0);

 
return 0 ;
}