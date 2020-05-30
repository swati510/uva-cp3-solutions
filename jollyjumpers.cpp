#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f=0;
    cin>>n;
    int ar[n];
    set<int>s;
    for(int i=1;i<n;i++)s.insert(i);
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=1;i<n;i++){
        if(s.find(abs(ar[i]-ar[i-1]))==s.end()){
            f=1;
            break;
        
        }
        s.erase(abs(ar[i]-ar[i-1]));

    }
    if(f==1)cout<<"Not jolly"<<endl;
    else cout<<"jolly"<<endl;
}