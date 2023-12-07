#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
int x;
cin>>x;
int arr[10]={1,2,5,10,20,50,100,200,500,2000};
int count=0;

for(int i=9;i>=0;i--){
    if(arr[i]<=x){
        count+=x/arr[i];
        x-=arr[i]*(x/arr[i]);
    }
}
cout<<count<<endl;

return 0 ;
}
// ---- dynamic programm of same problem----

// package dp;
//import java.util.Arrays;
//public class dynamicprogrammbasic{
    //public static void main(String[]args){
        //int n=18;
        //int arr[]={1,5,7};

        //int dp[]=new int[n+1];
        //Arrays.fill(dp,-1);
        //dp[0]=0;

        //int ans=mincoin(n,arr,dp);
        //System.out.println(ans);
        //for(int x:dp){
            //System.out.print(x+"");
        //}
        //static int mincoin(int n,int arr,int dp){
            //if(n==0){
                //return 0;
            //}
            //int ans=Intger.MAX_VALUE;
            //for(int i=0;i<a.length();i++){
                //if(n-a[i]>=0){
                    //int subans=0;
                    //if(dp[n-a[i]]!=-1){
                        //subans=dp[n-a[i]];
                    //}
                    //else{
                        //subans=mincoin(n,arr,dp);
                    //}

                    //if(subans+1<ans){
                        //ans=subans+1;
                    //}
                //}
            //}
        //}
        //return dp[n]=ans;
    //}
//}
