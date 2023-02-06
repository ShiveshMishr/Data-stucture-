#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

for(int row =1 ; row <= n ; row++){
    for(int num= 1 ; num <=(n-row+1); num++){
        cout<<num;
    }
    
    int trangle1= 1;
    while(trangle1<=(row-1)){
        cout<<"*";
        trangle1=trangle1+1;
    }
    int trangle2 = 1;
    while (trangle2 <= (row - 1))
    {
        cout << "*";
        trangle2 = trangle2 + 1;
    }
    for (int num2 =1; num2 <= (n - row + 1); num2++)
    {
        cout << n-num2+1;
    }
    cout<< endl;
}
return 0;
}