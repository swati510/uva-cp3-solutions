#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        vector<int>lis;
        vector<int>lds;
        for(int i=0;i<n;i++)cin>>ar[i];
        lis.push_back(ar[0]);
        lds.push_back(ar[0]);
        int maxm=0;
        for(int i=1;i<n;i++){
            if(ar[i]>lis.back()){
                lis.push_back(ar[i]);
            }
            else{
                int index=lower_bound(lis.begin(),lis.end(),ar[i])-lis.begin();
                lis[index]=ar[i];
            }
            if(ar[i]<lds.back()){
                lds.push_back(ar[i]);
            }
            else{
                int index=lower_bound(lis.begin(),lis.end(),ar[i])-lis.begin();
                lds[index]=ar[i];
            }
            maxm=max((int(lis.size())+int(lds.size())-1),maxm);
        }
        
        cout<<maxm<<endl;
    }
    
}