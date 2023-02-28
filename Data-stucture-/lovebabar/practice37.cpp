#include<iostream>
using namespace std;

int unique(int arr[], int size){

    for(int start = 0 ; start<=size-1 ; start++){
        int i;
        for( i = 0 ; i<start ;i++){
            if(arr[start]== arr[i]){
                break;
            }
            
        }
        if(start == i){
                 cout<< arr[i] << " "; 
            }
            
    }
cout << endl;
}

void printArray(int arr[], int size){
    for(int i = 0 ; i<size ; i++){
       cout<< arr[i] << " ";
    }
}

int main(){
int arr[11]= {1,5,7,5,8,9,11,11,2,5,6};

unique(arr,11);

printArray(arr , 11);

return 0;
}