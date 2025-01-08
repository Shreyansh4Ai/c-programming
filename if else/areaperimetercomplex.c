#include<stdio.h>
int main(){
    int l;
    printf("enter the length:");
    scanf("%d",&l);
    int b;
    printf("enter the breadth:");
    scanf("%d",&b);  
    int area=l*b;
     int peri=2*(l+b);                           
    if(area>peri)
    printf("area of rectangle is greater");
    if(peri>area)
    printf("perimeter of rectangle is greater than area");
    if(peri==area)
    printf("no one is greater");
    return 0;
    
}