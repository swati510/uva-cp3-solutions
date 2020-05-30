#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    int c=0;
    while(t--){
    int n,m,am;
    cin>>n>>m>>am;
    int mat[n][m];
    int sum[n][m]={0};
    
           // cout<<sum[i][j]<<" ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            
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
    int maxm[n*m+1]={999999};
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
         for(int i=k;i<k+n;i++){
           for(int j=l;j<l+n;j++){
             int total=sum[i][j];
             if(k>0)total-=sum[k-1][j];
             if(l>0)total-=sum[i][l-1];
             if(k=0&&l>0)total+=sum[k-1][l-1];
             maxm[(i-(k-1))*(j-(l-1))]=min(maxm[(i-(k-1))*(j-(l-1))],total);
           //  cout<<maxm<<endl;
         
    }}}}
    int ans,area;
   for(int i=m*n;i>0;i--){
       if(maxm[i]<=am){
           ans=maxm[i];
           area=i;
           break;
       }
   }
   cout<<"#"<<c<<": "<<area<<" "<<ans<<endl;
   c++;
   }
return 0;
}