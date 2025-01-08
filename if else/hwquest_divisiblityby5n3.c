#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    printf("the number is divisible by 3,5");
    else
    printf("the no. is not divisible by 3,5");
    return 0;
}