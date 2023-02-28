#include<iostream>
using namespace std;

int alternateswap(int arr[], int size){
    int start = 0 ; 
    int next = start+1;

       for(int i = 0 ; i <  (size-1); i++){
        swap(arr[start] , arr[next]);
        start=start + 2;
        next = next + 2;
        
       }
}

int printarr(int arr[] , int size){
    for(int i =0 ; i< size ; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;

    return 0 ;
}

int main(){
int arr[6]= {1,2,3,4,5,6};

alternateswap(arr , 6);

printarr(arr , 6);



return 0;
}