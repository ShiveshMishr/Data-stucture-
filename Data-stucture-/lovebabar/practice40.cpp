#include<iostream>
using namespace std;
int pairsum(int arr[], int size){
    int sum= 0 ;
    for(int i= 0 ; i<size-1; i++){
        int j;
        for(j = 0 ; j < size-1 ; j++){
            sum = arr[i]+arr[j];
            if(sum ==6 ){
                cout<< "("<<arr[i] << " ," << arr[j]<<")" << ",";
                }
            }
        }cout<<endl;
    }

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main(){
int arr[5]= {1,5,7,-1,5};

pairsum(arr , 5);

printArray(arr , 5);

return 0;
}