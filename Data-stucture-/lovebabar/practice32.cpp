#include<iostream>
using namespace std;

int update(int arr[] ,  int size){
    cout<< "inside the function"<<endl;
   arr[0] =188;
   for(int i = 0 ; i< size ; i++){
    cout<< arr[i];
   }
   cout<<endl;
cout<< "going back to main"<<endl;


}
int main(){
int arr[3]= {1,2,3};
 update(arr , 3);
for(int i = 0 ; i<3 ; i++){
    cout<<arr[i];
}
return 0;
}