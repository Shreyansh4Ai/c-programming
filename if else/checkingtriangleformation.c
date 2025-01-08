#include<stdio.h>
int main(){
    int a;
    printf("enter 1st side :");
    scanf("%d",&a);
    int b;
     printf("enter 2nd side :");
    scanf("%d",&b);
    int c;
     printf("enter 3rd side :");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b)
    printf("formation of triangle is possible ");
    else
    printf("formation of triangle is not possible ");
    return 0;
}