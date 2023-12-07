#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int curr=0,mx=0;
    int st=0,maxst=0;
    while (i<n)
    {
        if(arr[i]=='\0'||arr[i]==' '){
            if(curr>mx){
                maxst=st;
                mx=curr;
                
            }
            st=i+1;
            curr=0;
        }
        else{
        curr++;
        }
        if(arr[i]=='\0'){
        break;
        }
        i++;
    }

    cout<<mx<<endl;

    for(int i=0;i<mx;i++){
        cout<<arr[i+maxst];
    }
return 0 ;
}