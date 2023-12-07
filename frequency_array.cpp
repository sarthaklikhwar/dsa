#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string str="abcadfefdcbvghiadbczwqwekaasd";
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;
    }

    for(int i=0;i<str.size();i++){
        count[str[i]-'a']++;   //very important step
    }

    char ans='a';
    int maxans=0;

    for(int i=0;i<26;i++){
        if(count[i]>maxans){
            maxans=count[i];
            ans=i+'a';      //very important step

        }
    }
    cout<<maxans<<" "<<ans<<endl;
return 0 ;
}