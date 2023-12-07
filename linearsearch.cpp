#include <iostream>
#include <iomanip>
using namespace std;

int linearsearch(int array[],int n,int key){
    for(int j=0;j<n;j++){
        if(array[j]==key){
            return j;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key,ans;
    cin>>key;

    ans=linearsearch(arr,n,key);
    cout<<ans;
    return 0;
}