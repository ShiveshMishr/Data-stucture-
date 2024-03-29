#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start = 0 ;
    int end = size-1; 
    int mid = start + (end-start)/2;

    while(start <=end){
        if(arr[mid]== key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start) / 2;
    }
    return -1 ;
}

int main(){
int oddarr[5]={3,5,67,77,84};
int evenarr[6]= {12,22,33,332,453,3321};

int odd = binarysearch(oddarr, 5 , 84);
int even= binarysearch(evenarr , 6 , 453);

cout<< odd ;
cout << " "<< even;

return 0;
}