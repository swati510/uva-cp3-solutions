#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        long long int ans;
        cin>>n;
        int k=n/2;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
       long long int i=1;
        long long int sum=0;
        while(i<=n/2){
            sum+=8*i*i;
            i++;
        }
        cout<<sum<<endl;


    }
}