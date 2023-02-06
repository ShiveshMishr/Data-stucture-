#include<iostream>
using namespace std;

int main(){
int n; 
cin >> n;

for(int row = 1 ; row <= n ; row++){
    int space =row - 1;
    while(space){
        cout<<"-";
        space= space -1 ;
    }
    int col= 1;
    while(col<=(n-row+1)){
        cout<<"*";
        col= col+1;
    }
    cout<<endl;
}
return 0;
}