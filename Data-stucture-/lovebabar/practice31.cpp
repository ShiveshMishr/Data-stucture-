#include<iostream>
using namespace std;

int max(int arr[], int size){
    int a = INT_MIN;
    for(int i =0 ;i<size ; i++){

        a = max(a , arr[i]);

        /*if(arr[i]>a){
            a= arr[i];
        }*/
    }
    return a;
}
int min(int arr[], int size)
{
    int a = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        a = min(a , arr[i]);
       /* if (arr[i] < a)
        {
            a = arr[i];
        }*/
    }
    return a;
}

int main(){
int size;
cin>> size;

int arr[100];
for(int i=0 ; i < size  ; i++){
    cin>> arr[i];
}

cout<< "max value in array"<< max(arr , size)<< endl;
cout << "min value in array" << min(arr, size);
return 0;
}
