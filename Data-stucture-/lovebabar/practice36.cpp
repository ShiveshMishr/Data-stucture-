#include<iostream>
using namespace std;

//another apporch 
int alternateswaper(int arr[], int size){
    for(int i =0 ; i<size ; i+=2){
        if(i+1 < size){
            swap(arr[i+1] , arr[i]);
        }
    }
}

/*int alternateswap(int arr[], int size){
    int start = 0 ; 
    int next = start+1;

       for(int i = 0 ; i <  (size-1); i++){
        swap(arr[start] , arr[next]);
        start=start + 2;
        next = next + 2;
        
       }
}*/

int printarr(int arr[] , int size){
    for(int i =0 ; i< size ; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;

    return 0 ;
}

int main(){
int oddarr[7]= {1,2,3,4,5,6,7};
int evenarr[6] = {1, 2, 3, 4, 5, 6};

//alternateswap(arr , 7);

alternateswaper(oddarr , 7);
printarr(oddarr , 7);

alternateswaper(evenarr, 6);
printarr(evenarr, 6);

return 0;
}