#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int i=0,j=0,group=0;
    while(i<n){
        int intr =ar[i];
        int count=0,f=0;
        for(j=i;j<min(i+intr,n);j++ ){
            if(ar[j]>intr)intr=ar[j];
            count++;
            if(count==intr){
                j++;
                f=1;
                break;
            }

        }
        if(f==1){
            group++;
    
        }
        i=j;
    }
    cout<<group<<endl;


    }
    
    }