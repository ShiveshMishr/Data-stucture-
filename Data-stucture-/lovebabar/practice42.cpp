#include<iostream>
using namespace std;
int segregate0and1(int arr[], int size){
    int count=0 ;
    for(int i = 0  ; i <= size-1 ; i++){
        if(arr[i]==0){
            count++;
        }
    }
    for(int i = 0 ; i < count ; i++){
        arr[i]==0;
    }
    for(int i = count ; i<size ; i++){
        arr[i]==1;
    }
    cout << endl;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = { 0, 1, 0, 1, 0, 0, 1 }; 
    int size = sizeof(arr)/ sizeof(arr[0]);

    segregate0and1(arr , size);

    printArray(arr , size);
    return 0;
}