#include<iostream>
using namespace std;

int findpivote(int arr[], int size)
{
    int s=0 ; 
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s+ (e-s)/2;
    }
    return s;
}
int main(){
    int arr[]={1,3,8,10,17};
    int size = sizeof(arr)/sizeof(arr[0]);

    int p= findpivote(arr , size);
    cout << "the pivot is = " << p;

return 0;
}