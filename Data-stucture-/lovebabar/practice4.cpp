#include<iostream>
using namespace std;

int main(){

    int count=1;
    int n;
    cout<<"enter the no .";
    cin>> n ;

    for(int i =1 ; i<=n; i++){
        
        for(int j=1 ; j<=n; j++){

            cout<<count<<" ";
            count=count+1;

        }
        cout<<endl;
    }

return 0;
}