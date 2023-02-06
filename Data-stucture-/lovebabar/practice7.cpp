#include<iostream>
using namespace std;

int main(){
int n ;
cout<<"enter the no .";
cin >> n;
 
for(int row =1; row <= n ;){

    for(int col=1 ; col<=row ;){
        cout<<row+col;
        col=col+1;

    }
    cout<<endl;
    row=row+1;
}
return 0;
}