#include<iostream>
using namespace std;

int main(){
int n; 
cin>>n ;
for(int row = 1; row <= n ; row++){
    // for space
    int space = n-row;
    while (space)
    {
        cout<<" ";
        space= space-1;
    }
    int col = 1;
    while (col<= row)
    {
        cout<<"*";
        col=col+1;
    }
    cout<<endl;
}
return 0;
}