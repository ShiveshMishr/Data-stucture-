#include<iostream>
using namespace std;

int firstocc(int arr[] , int size , int key){
    int s =0 , e = size-1 ;
    int mid = s + (e - s)/2 ;
    int ans = -1 ; 
    
    while(s<= e){
        if(arr[mid]== key){
            ans = mid;
            e= mid - 1;
        }
        else if(arr[mid]< key){
            s= mid + 1;
        }
        else if(arr[mid]> key){
            e= mid - 1 ;
        }
        mid = s+ ( e-s)/2 ;
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s= mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main(){
int arr[] = {1,2,3,3,3,3,3,3,3,5};
int size = sizeof(arr)/ sizeof(arr[0]);

int first = firstocc(arr , size , 3);
cout << "the index of 3 " << first << endl;

int last = lastocc(arr, size, 3);
cout << "the index of 3 " << last;
return 0;
}