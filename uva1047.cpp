#include<bits/stdc++.h>
using namespace std;
int count(int a)
{
	int n = 0;
	while(a!=0)
	{
		n++;
		a-=(a&(-a));
	}
	return n;
}
int main(){
    int t;
    cin>>t;
   
    for(int i=0;i<t;i++){
         map<int,int>mp;
    int n,k;
    cin>>n>>k;
    int poles[n];
    for(int i=0;i<n;i++)cin>>poles[i];
    int m;
    cin>>m;
    int max=0;
     int sum=0,in;
    for(int i=0;i<m;i++){
        int no;
        cin>>no;
        int p=0;
        for(int i=0;i<no;i++){
         int tc;
         cin>>tc;
         tc--;
         p|=(1<<tc);
        }
        int am;
        cin>>am;
        mp[p]=am;
    }
   
 for(int i=0;i<(1<<n);i++)
 if(count(i)==k){
    for(int j=0;j<n;j++){
        if(i&(1<<j)){
            sum+=poles[j];

        }
    }   
 }
 for(auto it=mp.begin();it!=mp.end();++it)
			{
				int tmp = (it->first)&i;
				if(tmp>1)
				sum-=(count(tmp)-1)*(it->second);

			}
     if(sum>max){
         max=sum;
         in=i;

     } 

       printf("Case Number  %d\n",t++);
		printf("Number of Customers: %d\n",max);
		printf("Locations recommended:");
		for(int i=0;i<m;i++)
			if(in&(1<<i))
			printf(" %d",i+1);
		printf("\n\n");      

}


}