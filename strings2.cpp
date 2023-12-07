#include <bits/stdc++.h>
using namespace std;
int main() 
{
string s1="nincompoop";
    s1.erase(3,3);
    cout<<s1<<endl;
    s1.erase(3,2);   //here pass the intial index and the number of words we want to erase.
    cout<<s1<<endl;


    string s2="nincompoop";
    cout<<s2.find("poo")<<endl;
    cout<<s2.find("loo")<<endl;


    s2.insert(2,"lol");
    cout<<s2<<endl;


    cout<<s2.length()<<endl;



    for(int i=0;i<s2.length();i++){
        cout<<s2[i]<<endl;
    }




    cout<<s2.substr(4,4)<<endl;




    string s3="1234";
    int x=stoi(s3);
    cout<<x+1234<<endl;
    cout<<typeid(x).name()<<endl;


    int y=123;
    cout<<to_string(y)+"2"<<endl;


    //very important.
    string j="cabxrhi";
    sort(j.begin(),j.end());
    cout<<j<<endl;

return 0 ;
}