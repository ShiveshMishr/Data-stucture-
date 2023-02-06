#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;

    for(int i =1; i<=n; i++){
      
        for(int j=1; j<=4 ; j++){
            cout<<n-j+1;
        }
        cout<<endl;
    }
}