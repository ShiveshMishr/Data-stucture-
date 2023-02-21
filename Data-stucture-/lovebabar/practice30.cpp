#include<iostream>
using namespace std;

int bitsetp(){
    int n;
    cin>> n;
    int count=0;
   while(n!=0){
    int bit = (n&1);
   
    if(bit==1){
       count=count+1; 
    }
     n=n>>1;
   }
   return count;
}

int main(){
 int ans = bitsetp();
 cout << ans;
return 0;
}