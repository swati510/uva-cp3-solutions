#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int sum;
    cin>>sum;
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int f=0;
    for(int i=0;i<n-1;i++){
        int j=n-1,tmp=0,k=i;
        while(k<j){
            if(ar[k]>sum){
                f=2;
                break;
            }
            tmp+=ar[k];
            k++;
            if(sum==tmp){
                f=1;
                break;
            }
            if(tmp+ar[j]<=sum)tmp+=ar[j];
            if(ar[j]>=sum)break;
             if(sum==tmp){
                f=1;
                break;
            }
            j--;
        }
        if(f==1||f==2)break;
    }
if(f==1||sum==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}

}