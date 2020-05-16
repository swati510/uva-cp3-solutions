#include<bits/stdc++.h>
using namespace std;
void dfs(int i,vector<int>adj[],bool vis[]){
    vis[i]=true;
    for(auto itr=adj[i].begin();itr!=adj[i].end();++itr){
        if(!vis[*itr])dfs(*itr,adj,vis);
    }

}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        vector<int> adj[26];
        string arr;
        while(cin >> arr && arr[0]!='*'){
            if(adj[arr[1]-'A'].empty()) adj[arr[1]-'A'].push_back(arr[1]-'A');
            if(adj[arr[3]-'A'].empty()) adj[arr[3]-'A'].push_back(arr[3]-'A');
            adj[arr[1]-'A'].push_back(arr[3]-'A');
            adj[arr[3]-'A'].push_back(arr[1]-'A');
        }
       
        cin >> arr;
        for(int i = 0; i<=arr.length()-1; i += 2){
           if(adj[arr[i]-'A'].empty())adj[arr[i]-'A'].push_back(arr[i]-'A');
        }
        bool vis[26];
        memset(vis, false, sizeof(vis));
        int tree=0,acorn=0;
        for(int i=0;i<26;i++){
            if(!vis[i]&&!adj[i].empty()){
                if(adj[i].size()==1){
                    vis[i]=true;
                    acorn++;
                }
               else {  dfs(i,adj,vis);
                 tree++;
               }
            }
        }
     printf("There are %d tree(s) and %d acorn(s).\n", tree, acorn);  
    }
}