#include<iostream>
#include <iostream>
#include <math.h>
#include<bitset>

using namespace std;

int decimaltobinary(int n ){
    int i = 0 ;
    int ans =0;

    while(n!=0){
        int bit = n&1;
        ans=(bit * pow(10 , i )+ans);
        n= n>>1;
        i++;
    }
    return ans;
}
int main(){
    int n ;
    cin>>n;

    if(n<0){
        //if no, is negative 
        n= n*(-1);
        int ans = decimaltobinary(n);
        //find 2's complement 

    //first find  1's compl
        int newans= ~(ans);
    //2's comp
        newans = newans + 1;
        cout<< newans<< endl;
    }
    else{
        //if no is positive 
        int ans = decimaltobinary(n);
        cout<< ans<< endl;
    }
}
