#include<iostream>

using namespace std;

int main(){
    char ch;
    cout<<"enter the charecter";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"this is uppercase";
    }
    else if(ch>='a'&& ch<= 'z'){
        cout<<"this is a lowercase";
    }
    else if (ch>= '1' && ch<= '9'){
        cout<<"this is numeric";
    }
}