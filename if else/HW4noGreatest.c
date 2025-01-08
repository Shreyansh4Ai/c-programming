#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter a number a=");
    scanf("%d",&a);
    printf("enter a number b=");
    scanf("%d",&b);
    printf("enter a number c=");
    scanf("%d",&c); 
    printf("enter a number d=");
    scanf("%d",&d);
    if(a>b && a>c && a>d)
    printf("no. a is the greatest ");
    if(b>a && b>c && b>d)
    printf("no. b is the greatest ");
    if(c>a && c>b && c>d)
    printf("no. c is the greatest ");
    if(d>a && d>b  && d>c)
    printf("no. d is the greatest ");
   return 0;

}