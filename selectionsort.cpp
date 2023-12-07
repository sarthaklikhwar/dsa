#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int k=0;k<(n-1);k++){
        for(int l=k+1;l<n;l++){  ///this loop is responsible for sorting;
            if(arr[l]<arr[k]){
                int temp=arr[l];
                arr[l]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int q=0;q<n;q++){
        cout<<arr[q]<<endl;
    }
    return 0;
}