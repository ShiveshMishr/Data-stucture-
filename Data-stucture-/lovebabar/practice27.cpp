#include<iostream>
using namespace std;

int factorial(int n){

    int ans=1 ;

    for(int i = 1 ; i <= n ; i++){
            ans = ans*i ;
           
    }
    return ans;
    }

int nCr(int n , int r){
     
    int numinator = factorial(n);
    int denomenator = factorial(r)*factorial(n-r);

    return numinator/denomenator;

}

int main(){
    int a ,b ;
    cin>> a>> b ;

    int ans;
    ans = nCr(a,b);
    cout<<ans;

return 0;
}