#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
 int n;
 cin>>n;
 vector<vector<int>> v;
 for(int i=0;i<n;i++){
     int sta,e;
     cin>>sta>>e;
     v.push_back({sta,e});
 }
  sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){  // sorting 2-D vector in ascending order.
      return a[1]<b[1];
  });

  int take=1;
  int ans=v[0][1];
  for(int i=1;i<n;i++){
      if(v[i][0]>=ans){
          take++;
          ans=v[i][1];
      }

    cout<<take<<endl;
  }  
return 0 ;
}