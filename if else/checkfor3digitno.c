#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>99 && n<1000)
    printf("the no. is a 3 digit number");
    else
    printf("the no.is not a 3 digit number");
    return 0;
}