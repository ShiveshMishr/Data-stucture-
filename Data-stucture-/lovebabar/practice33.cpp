#include<iostream>
using namespace std;

int sumofarr(int arr[], int size){
    
    int sum =0 ;
   
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;

}

int main(){
int size;
    cin>> size;
    int arr[100];
     for(int i=0 ; i < size; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i< size ; i++){
        cout<<arr[i]<<endl;
    }
cout<<"the sum of arr is ="<<sumofarr(arr , size);

return 0;
}