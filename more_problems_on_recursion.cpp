#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string reversestr(string s,int n){
if(n>=0){
    cout<<s[n-1];
    return reversestr(s,n-1);
}

else{
    return " ";
}
}

string change(string a){

    if(a.size()==0){
        return " ";
    }

    if(a[0]=='p'&&a[1]=='i'){
        cout<<"3.14";
        return change(a.substr(2));

    }

    else{
        cout<<a[0];
        return change(a.substr(1));
    }
}

void tower(int n, char src,char dest,char helper){
    if(n==0){
        return;
    }
    tower(n-1,src,helper,dest);
    cout<<"move form "<<src<<" to "<<dest<<endl;
    tower(n-1,helper,dest,src);
}

void removedll(string t){
    if(t.size()==0){
        return;     //base case
    }

    if(t[0]==t[1]){
        cout<<"";
        removedll(t.substr(1));
    }

    else{
        cout<<t[0];
        removedll(t.substr(1));
    }
}

    void moveallx(string x){
        if(x.size()==0){
            return;
        }

        if(x[0]=='x'){
            moveallx(x.substr(1));
            cout<<'x';
        }

        else{
            cout<<x[0];
            moveallx(x.substr(1));
        }
    }

    string  substring(string h,string ans=" "){
        if(h.size()==0){
            cout<<ans<<endl;
            return "";
        }
        char ch=h[0];
        int code=ch;
        string ros=h.substr(1);
        substring(ros,ans);
        substring(ros,ans+ch);
        //cout<<int(ch)<<endl;
        substring(ros,ans+to_string(code));
    }

    string keyarr[]={" ","./","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz."};

    string words_form_phone(string s,string ans){
        if(s.size()==0){
            cout<<ans<<endl;
            return "";
        }
        char ch=s[0];
        string  code=keyarr[ch-'0'];
        string ros=s.substr(1);

        for(int i=0;i<code.size();i++){
            words_form_phone(ros,ans+code[i]);
            
        }
    }

int main() 
{
    //int n;
    //string s;
    //cin>>s>>n;
    //reversestr(s,n);

    //string a;
    //cin>>a;
    //cout<<change(a);

    //tower(3,'A','C','B');

    //removedll("aaaaabbbbbccccccddddeeefff");

    //moveallx("azxxbcvxthsdkfx");

    //substring("AB","");
    //cout<<substring;

    words_form_phone("23","");


    return 0 ;
}