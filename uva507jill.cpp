#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int c=1;
while(t--){
    int n;
    cin>>n;
    
    int ar[n+1];
    for(int i=1;i<n;i++)cin>>ar[i];
    int maxm=INT_MIN;
    int meh=0,in =1,s,en=1,pen;
    for(int i=1;i<n;i++)
     {
        if(meh+ar[i]<0){meh=0;
        s=i+1;
        //pen=i;
        }
        else  meh+=ar[i];
        if(maxm<=meh){
            maxm=meh;
            in=s;
            en=i+1;
        }
     }
     (maxm>0)?cout<<"The nicest part of route "<<c<<" is between stops "<<in<<" and "<<en<<endl:cout<<"Route "<<c<<" has no nice parts"<<endl;
     c++;
}


}