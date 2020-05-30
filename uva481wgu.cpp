#include<bits/stdc++.h>
using namespace std;
void printseq(int in,int pred[],vector<int>seq){
    if(in==-1)
        //cout<<seq[in]<<endl;
        return;
    
    printseq(pred[in],pred,seq);
    cout<<seq[in]<<endl;
    
}
void lisc(vector<int> ar,int n){
    int count=0;
    vector<int>subs;
    subs.push_back(ar[0]);
    int i=0,t=0;
    //count=1;
    for(i=1;i<n;i++){
    if(ar[i]>subs[t]){
        subs.push_back(ar[i]);
        t++;
        
    }
    else{
        int index=lower_bound(subs.begin(),subs.end(),ar[i])-subs.begin();
        subs[index]=ar[i];
       }
    }
    cout<<subs.size()<<endl;
    cout<<"-"<<endl;
    for(vector<int>::iterator itr=subs.begin();itr!=subs.end();++itr)
    cout<<*itr<<endl;
}
int main(){
    int n;
    vector <int> seq;
    int t=8;
    while (t--){
        cin>>n;
        seq.push_back(n);}
        //for(int i=0;i<8;i++)cout<<seq[i]<<" ";
    n=seq.size();
    int lis[n]={1};
    int pred[n];
    pred[0]=-1;
    int in,maxm=0;
    /*for( int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                if(seq[i]>seq[j]&& lis[i] <=lis[j] + 1){lis[i]=lis[j]+1;
                pred[i]=j;}
                if(maxm<=lis[i]){
                    maxm=lis[i];
                    in=i;
                }
            }
        }
    cout<<endl<<maxm<<endl;
    cout<<"-"<<endl;
    printseq(in,pred,seq);*/
    lisc(seq,seq.size());
}