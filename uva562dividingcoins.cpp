#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n+1];
        int sum=0;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        int ans=sum-sum/2;
        int dp[n+1][sum/2+1]={0};
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum/2;j++){
                if(i==0||j==0)dp[i][j]=0;
                else if(ar[i]>j)dp[i][j]=dp[i-1][j];
                else{
                    dp[i][j]=max(ar[i]+dp[i-1][j-ar[i]],dp[i-1][j]);
                }
            }
        }
        cout<<abs(sum-2*dp[n][sum/2])<<endl;
    }
}