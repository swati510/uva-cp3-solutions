#include <algorithm> 
#include <iostream> 
  
using namespace std; 
  
int main() 
{ 
    string str;
   while(getline(cin,str)){
       if(str.compare("#")==0)break;
       else {
           bool val=next_permutation(str.begin(),str.end());
           if (val == false) 
        cout << "No Successor"
             << endl; 
    else
        cout << str << endl; 
       }
   }
    
    return 0; 
} 