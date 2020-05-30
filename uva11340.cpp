#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
      int n;
      cin>>n;
      map<char,int>mp;
      for(int i=0;i<n;i++){
          int val;
          char c;
          cin>>c>>val;
          mp[c]=val;
      }
      int sum=0;
      int m;
      cin>>m;
      char ch = getchar();
        long count = 0;
        while((ch = getchar())!=EOF)
            if(ch!=' ' || ch!='\n') count += mp[ch];
         printf("%0.2f$\n", count/100.0);
 }



}