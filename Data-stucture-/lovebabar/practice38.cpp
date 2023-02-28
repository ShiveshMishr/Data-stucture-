#include<iostream>
using namespace std;

int dublicate(int arr[], int size){
    
    for(int i = 0 ; i<=size-1 ; i++){
        int j;
        for(j=0 ; j <i ; j++){
            if(arr[i]== arr[j]){
               cout<< arr[i]<< " ";
            }
            
        }
        
    }cout<<endl;

}

void printArray(int arr[], int size)
{
    for (int i = 0; i <size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[13] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6, 1,7};

    dublicate(arr, 13);

    printArray(arr, 13);

    return 0;
}