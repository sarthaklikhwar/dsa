#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string str;
    //cin>>str;
    //cout<<"hello "<<str<<endl;

    //Different ways to declare a string

    string str1(5,'n');
    str1.clear();
    cout<<str1<<endl;

    string str2="hello";
    str2.clear();
    cout<<str2<<endl;

    //how to take a sentence as input

    string str3;
    getline(cin,str3);
    cout<<str3<<endl; 

    if(str1.empty()){
        cout<<"the given string is empty"<<endl;
    }

    cout<<str2.compare(str1)<<endl;
return 0 ;
}