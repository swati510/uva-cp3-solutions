#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int x=n/2,y=n/2;
    vector<pair<int,int>>v;
    v.push_back(make_pair(-1,0));
    v.push_back(make_pair(-1,-1));
    v.push_back(make_pair(0,-1));
    v.push_back(make_pair(+1,-1));
    v.push_back(make_pair(+1,0));
    v.push_back(make_pair(+1,0));
    v.push_back(make_pair(+1,+1));
    int a=q/7;
    int r=q%7;
    x=x+(a-1)+a*v[q-1].first;
    y=y+(a-1)+a*v[q-1].second;
    cout<<x<<y;

}