#include<bits/stdc++.h>
using namespace std;

long long int func(long long int a){
   long long int mini=10,maxi=0;
   long long int t;
   while(a>0){
    t=a%10;
    a=a/10;
   // if(t==0)return 0;
    mini=min(mini,t);
    
    maxi=max(maxi,t);
    
       
   }
 
  return mini*maxi;
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
   long long  int  a;
   long long int k;
    cin>>a>>k;
    long long int ans;
    k--;
    while(k--){
        ans=func(a);
         if(ans==0)break;
        a=a+ans;
       
        
       // a=ans-'0';
        
    }
    printf("%lld\n", a);

    
        
    }
}