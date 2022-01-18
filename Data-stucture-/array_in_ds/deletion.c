#include<stdio.h>

int main(){
    int a[50], pos, i,size, temp;
    
    printf("Enter the size of the array");
    scanf("%d",&size);

    printf("Enter the elements in array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    

    printf("Enter the position to delte the element");
    scanf("%d",&pos);

    if(pos<=0 || pos>size){
        printf("Invalid Input");
    }
    else{
        temp=a[pos-1];
        for(i=pos-1;i<size-1;i++){
            a[i]=a[i+1];
            
        }
    }
    size--;
    for(i=0;i<size;i++){
    printf("% d\n",a[i]); 
    }
    
    printf("You have deleted value %d",temp);

}