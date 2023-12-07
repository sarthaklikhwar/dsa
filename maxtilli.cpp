#include <bits/stdc++.h>
//#include<climits>
using namespace std;
int main(){
    int arr[5]={-1,9,0,6,12};
    int mx=INT32_MIN;
    for(int i=0;i<5;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}