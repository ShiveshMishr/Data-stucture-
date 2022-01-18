#include<stdio.h>

int main(){
    int size , a[50], i, num , pos;

    printf("Enter the size of array =");
    scanf("%d",&size);

    printf("Enter the elements in array");
    for(i=0 ; i<size ; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the no you want to insert");
    scanf("%d",&num);

    printf("Enter the position to enter num");
    scanf("%d",&pos);

    if(pos<=0 || pos>size+1){
        printf("Invalid input");
    }
    else{
        for(int j = size-1;j>pos-1;j--){
            a[j+1]=a[j];
        }
    }
    a[pos-1]=num;
    size++;
    for(i=0;i<size;i++){
        printf(" %d ",a[i]);
    }

}