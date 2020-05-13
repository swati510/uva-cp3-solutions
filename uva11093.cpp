#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int tc=0;
   while(t--){
       int n,f=0,ind=0;
       cin>>n;
       int p[n],q[n];
       for(int i=0;i<n;i++)cin>>p[i];
       for(int i=0;i<n;i++)cin>>q[i];
       int sum=0;
       for(int i=0;i<n;i++){sum+=p[i]-q[i];
       }
       if(sum<0){
           cout<<"Not Possible"<<endl;
           continue;
       }
       
          for(int i=0;i<n;i++){
              sum=0;
             int f2=0;
              //int j=(i+1)%n;
              for(int j=i;j<n+i;j++){
                sum+=p[j%n]-q[j%n];
                if(sum<0){
                    f2=1;
                    break;
                }
                
              }
              if(f2==0){ind=i;
              break;}
          }
          cout<<"Possible from station "<<ind+1<<endl;

           
       
   }
}