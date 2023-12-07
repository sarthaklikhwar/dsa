#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int powerof2(int n){
    return(n && !(n & (n-1)));
}
int main() 
{
    cout<<powerof2(16)<<endl;
    cout<<powerof2(13)<<endl;
    cout<<powerof2(0)<<endl;

return 0 ;
}