#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string cse="sdflifskdifjfk";
    string bb="OIEFKISDKVNUSFKJFIJ";
    // the difference between the ASCII value of small and captial letters is used as concept to solve these kind of problems.
    for(int i=0;i<cse.size();i++){
        if(cse[i]>='a' && cse[i]<='z'){
            cse[i]-=32;      // this is how we should append the string or manipulate it .
        }

    }

    cout<<cse<<endl;


    for(int i=0;i<bb.size();i++){
        if(bb[i]>='A'&& bb[i]<='Z'){
            bb[i]+=32;
        }
    }

    cout<<bb<<endl;

    // using transform function

    string str="gknkgnaksdjfkngjkfdsng";
    transform(str.begin(),str.end(),str.begin(),:: toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),:: tolower);
    cout<<str<<endl;

return 0 ;
}
// ASCII value of 'a' is 97 and 'A' is 65.