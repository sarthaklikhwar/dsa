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

    int counter=1;
    while(counter<n){
        for(int j=0;j<n-counter;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        counter+=1;
    }

    for(int q=0;q<n;q++){
        cout<<arr[q]<<endl;
    }
     
    return 0;
}