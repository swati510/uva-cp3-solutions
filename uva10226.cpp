#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 string str;
 //cin>>str;
 getchar();
 //getchar();
 while(t--){
     map<string,int>mp;
    while(getline(cin, str)) {
			if(str.compare("") == 0)
				break;
			mp[str]++;
		//	n++;
		}
     double s=0;
     for(auto i=mp.begin();i!=mp.end();++i){
         s+=i->second;
     }
     for(auto i=mp.begin();i!=mp.end();++i){
         cout<<i->first<<" "<<fixed<<setprecision(4)<<float(((i->second) /s)*100.0)<<endl;
     }

}

}