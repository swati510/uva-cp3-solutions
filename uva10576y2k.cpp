#include<bits/stdc++.h>
using namespace std;


int surp, def;


void backtrack(int i,int &maxm,int sum[]){
   if(i>5){
       if(sum[i-1]-sum[5-(i-1)]>0){
           //
           sum[i-1]=0;
           return;
       }
    // cout<<sum[i-1]-sum[i-(5)-1]<<endl;
}
   if(i==13){
       maxm=max(maxm,sum[12]);
      // cout<<maxm<<endl;
       return;
   }
   sum[i]=sum[i-1]+surp;
   if(i+1<=13)backtrack(i+1,maxm,sum);
   //sum[i]-=surp;
   sum[i]=sum[i-1]-def;
   if(i+1<=13)backtrack(i+1,maxm,sum);
    
}
int main(){
while(cin>>surp){
int maxm=0;
cin>>def;
int sum[13]={0};
backtrack(1,maxm,sum);
cout<<maxm<<endl;
}


}