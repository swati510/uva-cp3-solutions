#include <bits/stdc++.h>
using namespace std;
typedef long long LL; 
typedef pair<int, int> pi;
struct comp {
bool operator()(const pi &a,const pi &b){
    if(a.first==b.first)return a.second<b.second;
    return a.first<b.first;
}};
struct func{bool operator()( const pi &a,const pi &b){
    return a.first>b.first;
}};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n],b[n],c[n];
    set<pi,comp>start;
    set<pi,func>cmp;
    for(int i=0;i<n;i++){cin>>a[i];
    start.insert(make_pair(a[i],i));}
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cin>>c[i];
    
    int finall[n]={0};
     priority_queue <int, vector<int>, greater<int>> chef;
   int i=0; auto itr=start.begin();
    for( i=0;i<k;i++){
       
      //  finall[itr->second]=(itr->first);
        chef.push(0);
        // ++itr;
        
    }
    i=0; auto it=cmp.begin();
   while(itr!=start.end()){
      
     
      while((chef.top()>a[itr->second])){
          cmp.insert(make_pair((max(chef.top()-itr->second,0)+b[itr->second])*c[itr->second],itr->second));
          
          ++itr;
         if(itr==start.end())break;
      }
      
     if(cmp.begin()==cmp.end()){if(itr!=start.end()) {
        cmp.insert(make_pair((max(chef.top()-itr->second,0)+b[itr->second])*c[itr->second],itr->second)); 
          ++itr;
      
      }
      else break;
      }
      it=cmp.begin();
        
      finall[it->second]=max(chef.top(),a[it->second]);
     chef.pop();
      chef.push(finall[it->second]+b[it->second]);
      cmp.erase(it);
      ++it;
    }
     
    while(it!=cmp.end()){
        it=cmp.begin();
         finall[it->second]=max(chef.top(),a[it->second]);
         chef.pop();
      chef.push(finall[it->second]+b[it->second]);
            cmp.erase(it);
      ++it;
     
 

    }
    for(int i=0;i<n;i++)cout<<finall[i]<<" ";


 

    return 0;
}