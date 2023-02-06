#include<iostream>
using namespace std;

int main(){
int n;
cin>> n;
int count =1;

for(int row =1 ; row <= n ; row ++){
    int space= row - 1 ;
    while(space){
        cout<<"-"<<" ";
        space = space - 1 ; 
    }
    int num=1 ;
    while(num<=(n-row+1)){
        cout<<count<< " ";
        count= count+1;
        num = num +1 ;
    
    }
    cout << endl;
}
return 0;
}