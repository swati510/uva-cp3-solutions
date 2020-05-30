#include<bits/stdc++.h>
#define LL int64_t 
using namespace std;

void secMethod(vector<int>a){
    LL min_prod=1, max_prod=1,maxm=INT_MIN;
    min_prod=1;
    max_prod=1;
    for(int i=0;i<a.size();i++){
        if(a[i]<0){
           int  temp=max_prod;
            max_prod=min_prod*a[i];
            min_prod=temp*a[i];
        }
       else if(a[i]==0){
            max_prod=0;
            min_prod=1;
        }
        else{
            max_prod=max_prod*a[i];
            min_prod=min_prod*a[i];
        }
        maxm=max(maxm,max_prod);
        if(max_prod<=0)max_prod=1;
    }
    cout<<maxm<<endl;
}
int dp[1000][1000];
int main(){
   int n;
   while(cin>>n){
       vector<int> a;
       a.push_back(n);
       int t;
      while(cin>>t&&t!=-999999){
          a.push_back(t);
      }
      int maxi=INT_MIN;
     secMethod(a);
     /* for(int i=0;i<a.size();i++){
          for(int j=i;j<a.size();j++){
              if(i==j)dp[i][j]=a[i];
              else dp[i][j]=dp[i][j-1]*a[j];
              maxi=max(maxi,dp[i][j]);
          }
      }*/
     // cout<<maxi<<endl;

   }
   return 0;

}