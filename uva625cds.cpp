#include<bits/stdc++.h>
using namespace std;

int maxm=INT_MIN;
set<int> best;
int bestlen=INT_MIN,len=0;
int n,num;
int ar[100000];

void backtrack(int i,int sum,set<int>s){
  
           
       sum+=ar[i];
       s.insert(ar[i]);
       len++;
      
       if(sum>maxm||(sum==maxm&&len>bestlen)){
           best=s;
           maxm=sum;
          }
   
       for(int j=i+1;j<n;j++)
       if(sum+ar[j]<=num)backtrack(j,sum,s);
         
    
 }
int main(){
while(cin>>num){
cin>>n;

int sum=0;
for(int i=0;i<n;i++){cin>>ar[i];
sum+=ar[i];
}

if(sum<=num){
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
    cout<<"sum: "<<sum<<endl;
}

else {
    sum=0;
   for(int i=0;i<n;i++)
    {   
        sum=0;
        set<int>s;
        backtrack(i,sum,s);
        
    }
    for(auto itr=best.begin();itr!=best.end();++itr)cout<<(*itr)<<" ";
    cout<<"sum: "<<maxm<<endl;
}
}

}