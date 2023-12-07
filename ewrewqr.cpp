#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int check=b;
        string s;
        for(int i=0;i<n;i++){
            s[i]='R';
        }
        vector<int> v;
        for(int i=b+1;i>0;i--){
            if(r>0){
                int sum=r/i;
            v.push_back(sum);
            r=r-sum;
            }
        }
        for(int i=0;i<v.size()-2;i++){
            cout<<v[i]<<endl;
        }
        
        
    }
    return 0;
}