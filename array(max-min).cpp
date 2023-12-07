#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    //cout<<endl;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int minno=INT16_MAX;
    int maxno=INT16_MIN;

    for(int j=0;j<n;j++){
        maxno=max(maxno,array[j]);
        minno=min(minno,array[j]);
    }
    cout<<maxno<<" "<<minno<<endl;
    
    

    return 0;
}