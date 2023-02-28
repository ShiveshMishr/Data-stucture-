#include<iostream>
using namespace std;
int arrayintersection(int arr[],int brr[], int size){
    for(int i = 0 ; i<= size-1 ; i++){
        int j;
        for(j = 0 ; j < size-1 ; j++){
            if(arr[i]== brr[j]){
                cout<< arr[i] << " ";
              
            }
        }
       
    } cout<< endl;
}
void printArray(int arr[] ,int brr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        
    }
    cout<< endl;
    for (int i = 0; i < size; i++)
    {
        
        cout << brr[i] << " ";
    }
}

int main(){
int arr[6]= {1,2,3,4,5,9};
int brr[6]= {2,9,4,8,15,9};

arrayintersection(arr, brr, 6);

printArray(arr,brr ,6 );

return 0;
}