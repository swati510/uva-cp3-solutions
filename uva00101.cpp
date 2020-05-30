#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v[n];
queue<int>tmp;
int m=n;
while(1){
    char ar[20];
    int i=0,a,b;
    while ((getchar()) != '\0'){
        ar[i]=getchar();
        i++;
    }
    cin>>a;
    while ((getchar()) != '\0'){
        ar[i]=getchar();
        i++;
    }
    cin>>b;

if(ar[0]=='m'&&ar[7]=='n'){
    int c=v[b].back();
    while(c!=b){
        v[c].push_back(c);
        v[b].pop_back();
        c=v[b].back();
    }
    c=v[a].back();
    while(c!=a){
        v[c].push_back(c);
        v[a].pop_back();
        c=v[a].back();
    }
    v[b].push_back(a);
    v[a].pop_back();

}
else if (ar[0]=='m'&&ar[7]=='v'){
    int c=v[a].back();
    while(c!=a){
        v[c].push_back(c);
        v[a].pop_back();
        c=v[a].back();
    }
    v[b].push_back(a);
    v[a].pop_back();


}
else if (ar[0]=='p'&&ar[7]=='n'){
    int c=v[b].back();
    while(c!=b){
        v[c].push_back(c);
        v[b].pop_back();
        c=v[b].back();
    }
    c=v[a].back();
    while(!v[c].empty()){
        tmp.push(c);
        v[a].pop_back();
      if(!v[c].empty())  c=v[a].back();

    }
    while(!tmp.empty()){
        v[b].push_back(tmp.front());
        tmp.pop();
    }
    

}
else if (ar[0]=='p'&&ar[7]=='v'){
    int  c=v[a].back();
    while(!v[c].empty()){
        tmp.push(c);
        v[a].pop_back();
        if((!v[c].empty())) c=v[a].back();
    }
    while(!tmp.empty()){
        v[b].push_back(tmp.front());
        tmp.pop();
    }


}
else break;



      
}
for(int i=0;i<n;i++){
    cout<<i<<": ";
    for(auto it=v[i].begin();it!=v[i].end();++it){
        cout<<v[i][*it];
    }
    cout<<endl;
}

}