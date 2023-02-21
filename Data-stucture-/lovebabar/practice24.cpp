#include<iostream>
using namespace std;

int main(){
    int n ;
int *num = &n ;
int notes;
cout<<"entre the num";
cin>> n;
cout<<"enter the notes you want";
cin>> notes;

switch(notes){
    case 100: 
    {
        cout<<"No. of hundre's note" <<(n/100);
    }

    case 50:
    {
        cout << "no of fifty note" << (n / 50);
    }
    case 20:{
        cout << "no of twenty note" << (n / 20) ;
    }
    case 1:{
        cout << "no of one's note" << (n / 1);
        break;
    }
    default:cout<<"not valid";

}
return 0;
}