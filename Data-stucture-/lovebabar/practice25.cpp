#include<iostream>
using namespace std;

int power(){
    int a , b;
    cout<<"Enter the no.= ";
    cin>>a;
    cout<<"enter the power = ";
    cin>> b ;
int ans = 1;
    for(int i= 1 ; i<=b ; i++ ){
        ans = ans*a;
    }
    return ans;
}
int main(){
    
   int ans = power();
   cout<< ans;

return 0;
}