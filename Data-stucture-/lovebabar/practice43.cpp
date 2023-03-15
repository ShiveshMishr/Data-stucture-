#include<iostream>
using namespace std;

int zerosons(int arr[], int size){
    int start =0 ;
    int end = size-1;

    while(start < end){
        if(arr[start]==0){
            start++;
        }
        if(arr[end]== 1){
            end--;
        }
        swap(arr[start], arr[end]);
    }
}
int print(int arr[], int size)
{
    for(int i =0 ; i<size ; i++){
        cout<< arr[i]<< " ";
    }
}
int main(){

    int arr[]={0,1,0,1,1,0,1,1,0,0,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    zerosons(arr , size);

    print(arr , size);
    


return 0;
}
