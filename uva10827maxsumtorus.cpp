#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mat[2*n][2*n];
    int sum[2*n][2*n]={0};
    
           // cout<<sum[i][j]<<" ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            mat[i][j+n]=mat[i][j];
            mat[i+n][j]=mat[i][j];
            mat[i + n][j + n]=mat[i][j];
        }
       // cout<<endl;
    }
     for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++)
        {
            sum[i][j]=mat[i][j];
            if((i-1)>=0)sum[i][j]+=mat[i-1][j];
            if((j-1)>=0)sum[i][j]+=mat[i][j-1];
            if(((i-1)>=0)&&((j-1)>=0))sum[i][j]-=mat[i-1][j-1];
            
        }
       // cout<<endl;
    }
    int maxm=-999999;
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
         for(int i=k;i<k+n;i++){
           for(int j=l;j<l+n;j++){
             int total=sum[i][j];
             if(k>0)total-=sum[k-1][j];
             if(l>0)total-=sum[i][l-1];
             if(k=0&&l>0)total+=sum[k-1][l-1];
             maxm=max(maxm,total);
           //  cout<<maxm<<endl;
         
    }}}}
   cout<<maxm<<endl;
return 0;
}