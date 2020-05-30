#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k=1;
    while(t--){
        int n;
        cin>>n;
        int h[n],w[n];
        for(int i=0;i<n;i++)cin>>h[i];
        for(int i=0;i<n;i++)cin>>w[i];
        vector<int>lis,lds,lisw,ldsw;
        lis.push_back(h[0]);
        lds.push_back(h[0]);
        lisw.push_back(w[0]);
        ldsw.push_back(w[0]);
        int maxm=0;
        for(int i=1;i<n;i++){
            if(h[i]>lis.back()){
                lis.push_back(h[i]);
                lisw.push_back(w[i]);
            }
            else if(h[i]==lis.back()){
                lisw.back()=max(lisw.back(),w[i]);
            }
            else{
                int index=lower_bound(lis.begin(),lis.end(),h[i])-lis.begin();
                if(lis[index]!=h[i]){
                lis[index]=h[i];
                lisw[index]=w[i];}
                else{
                 lisw[index]=max(lisw[index],w[i]);   
                }
                //lis[index].second=i;
            }
            if(h[i]<lds.back()){
               lds.push_back(h[i]);
               ldsw.push_back(w[i]);

            }
            else if(h[i]==lds.back()){
                ldsw.back()=max(ldsw.back(),w[i]);
            }
            else{
                int index=lower_bound(lds.begin(),lds.end(),h[i])-lds.begin();
                if(lds[index]!=h[i]){
                lds[index]=h[i];
                ldsw[index]=w[i];}
                else{
                 ldsw[index]=max(ldsw[index],w[i]);   
                }
              //  lds[index].second=i;
            }
            
        }
        int sumin=0,sumd=0;
        for(vector<int>::iterator itr=lisw.begin();itr!=lisw.end();++itr){
           sumin+=(*itr);
        }
        for(vector<int >::iterator itr=ldsw.begin();itr!=ldsw.end();++itr){
           sumd+=(*itr);
        }
    cout<<endl;
      cout<<"case "<<k<<": "<<"Increasing("<<sumin<<") Decreasing("<<sumd<<")";
      k++;
    }
}