#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int orig[n];
    int pos[1000];
    for(int i=0;i<n;i++){
        cin>>orig[i];
        orig[i]--;
        pos[orig[i]]=i;
    }
    int temp, j=0,ar[n];
      while(scanf("%d",&temp) == 1){
          temp--;
       ar[temp]=orig[0];
       for(j=1;j<n;j++){
         cin>>temp;
         temp--;
         ar[temp]=orig[j];

       }
       int lis[n]={1};
       cout<<endl;
      for(int i=0;i<n;i++)lis[i]=1;;
       int maxm=0;
       for(int i=1;i<n;i++){
         for(j=0;j<i;j++){
             if(ar[i]>ar[j]&& lis[i] < lis[j] + 1){
                 lis[i]=lis[j]+1;
                
            
             }
              if(maxm<lis[i]){
                    maxm=lis[i];
                   // in=i;
                }
             //else lis[i]=max(lis[i],lis[j]);
         }

       }
      cout<<maxm<<endl;

       j=0;

      }
      return 0;
}