#include<stdio.h>

int main(){

    int size ,a[50] , i;

    printf("enter the no of elements in array=");
    scanf("%d",&size);

    //take input of the elements 
    printf("enter the Elementes\n");
    for(i=0 ; i<size; i++){
        scanf("%d",&a[i]);
    }

    // for printing all the values of the array.
    printf("Printing the value of array = ");
    for(i=0 ; i<size ; i++){
        printf(" %d ",a[i]);
    }

}