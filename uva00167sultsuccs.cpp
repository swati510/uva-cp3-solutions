#include<bits/stdc++.h>
using namespace std;
int mat[8][8];
int ans=0;
bitset<15> rw,rd,ld;
void backtrack(int c,int sum){
    if(c==8){
        if(sum>ans)ans=sum;
        return;
    }
    for(int row =0;row<8;row++){
        if(!rw[row]&&!ld[row-c+7]&&!rd[row+c]){
            rw[row]=true;
            ld[row-c+7]=true;
            rd[row+c]=true;
            backtrack(c+1,sum+mat[row][c]);
            rw[row]=false;
            ld[row-c+7]=false;
            rd[row+c]=false;
        }
    }


}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++)
                scanf("%d", &mat[i][j]);
           // used[i] = 0;
        }
        backtrack(0,0);
        cout<<ans<<endl;
        
    }
}