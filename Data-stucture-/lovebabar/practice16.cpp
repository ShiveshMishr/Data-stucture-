#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 1;

    for (int row = 1; row <= n; row++)
    {
        int space = n-row;
        while (space)
        {
            cout<< "-"<< " ";
            space = space - 1;
        }
        int col= 1;
        while(col<=row){
            cout<<col<<" ";
            col= col+1;
        }
        int rev= 1;
        while(rev<=(row-1)){
            cout<<rev<<" ";
            rev= rev+1;
        }
        cout<< endl;
    }   
       
    return 0;
}