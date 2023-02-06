#include<iostream>
using namespace std;

int main(){
int n ; 
cout<<"enter the no.";
cin>>n;


for(int row=1 ; row <=n ; row++){

    
    for(int col=1; col<=row; col++){
        
        cout<<n-col+1<<" ";
       

    }
    cout<<endl;
}

return 0;
}