#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int sum=0;
        for(int i=k;i<n;i++)sum+=a[i];
        int j=n-1,i=0;
        while(k--){if(a[i]<b[j])sum+=b[j];
        else sum+=a[i];
        i++;
        j--;}
        cout<<sum<<endl;
        





    }
    
    
    }