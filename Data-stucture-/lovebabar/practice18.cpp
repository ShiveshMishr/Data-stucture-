#include<iostream>
using namespace std;

int main(){
//fibonaci
    int n; 
    cin>>n ;

    int a=0 ;
    int b=1;

    for(int i =0 ; i<=n ; i++ ){
        int next= a+b;
        cout<<" " << next<<" ";
        a=b;
        b=next;
        

    }


return 0;

}