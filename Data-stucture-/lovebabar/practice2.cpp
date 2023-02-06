#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;
    int sum =0;

    for(int i=2 ; i<=n ;i=i+2)
    {
       sum= sum+i;
       
    }

    cout<<"the of even no is :"<< sum;


}