#include<stdio.h>
#include<stdlib.h>              //array of size 5 taking input from user //
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));

    printf("enter 5 numbers");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }

    //output

    for(int i=0;i<5;i++){
        printf("number %d is %d\n",i,ptr[i]);
    }



    return 0;
}