#include<iostream>
using namespace std;

bool isPrime(int n){
    
    for(int i = 2; i<= n-1; i++){
        if(n%i== 0 ){
            return 0 ;
        }

    }
    return 1;

}

int main(){
    int n ;
    cin >> n ;

    int ans = isPrime(n);
    if(ans==0){
        cout<<"not prime";
    }
    else {cout<<"prime";
    }

return 0;
}