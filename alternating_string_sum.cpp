#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a,b;
	    a=0;
	    b=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='0'){
	            a++;
	        }
	        else{
	            b++;
	        }
	    }
	    
	    int m=min(a,b);
	    
	    if(a!=b){
	        cout<<(2*m)+1<<endl;
	    }
	    
	    else{
	        cout<<(2*m)<<endl;
	    }
	}
	    return 0;
	    
	    
}
