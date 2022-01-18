#include<stdio.h>

int main(){
    int a[5],i;

    int *q =a;
    for(i=0 ;i<5;i++){
        printf("Enter the array element");
        scanf("%d",&q[i]);
    }
    for(i=0;i<5;i++){
        printf(" %d",i[q]);
    }    

}