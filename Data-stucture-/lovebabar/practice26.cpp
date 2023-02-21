#include<iostream>
using namespace std;

int isEven(){
    int a;
    cin >> a ;

    if(a&1){
        return 0;
    }
    else
    { return 1; }


}
int main(){
int ans;
ans = isEven();
if(ans==1){
    cout<<"even";
}
else{
    cout<< "odd";
}
return 0;
}