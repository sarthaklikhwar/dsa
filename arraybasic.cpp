#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    //cout<<endl;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int j=0;j<n;j++){
        cout<<array[j]<<" ";
    }
    return 0;
}