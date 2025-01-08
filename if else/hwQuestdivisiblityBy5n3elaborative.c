#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%5==0)
    printf("the number is divisible by 5\n");
    else
    printf("the no. is not divisible by 5\n");
    if(n%3==0)
    printf("the number is divisible by 3\n");
    else
    printf("the number is not divisible by 3");
    return 0;
}