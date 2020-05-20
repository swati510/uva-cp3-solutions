#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0,mini=INT_MAX;
        int ar[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
         cin>>ar[i][j];
        int perm[n];
        for(int i=0;i<n;i++)perm[i]=i;
        do{
            sum=0;
        for(int i=0;i<n;i++){
           
            sum+=ar[i][perm[i]];

        }
        mini=min(sum,mini);
    }while ( next_permutation(perm,perm+n) );

    cout<<sum<<endl;
}}