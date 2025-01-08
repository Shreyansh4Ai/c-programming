#include<stdio.h>
int main(){
    int i;
    printf("enter a number:");
    scanf("%d",&i);
    if(i%2==0){
        printf("entered number is even");
    }
    else
    {
        printf("entered number is odd");
    }
return 0;
}