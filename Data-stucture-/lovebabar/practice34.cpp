#include<iostream>
using namespace std;

int search(int arr[], int size ,int key){
    for(int i=0 ; i<size ; i++){
        
        if(arr[i]== key){
            return 1;
        }
    }
    return 0;
}

int main(){
int arr[5]= {1,2,3,4,5};
int key;
cin>> key;

bool found = search(arr,5,key);

if(found){
    cout << "the element is found";
}
else { cout << "the element is not found";
}
return 0;
}