#include<stdio.h>
int main(){
    //area and perimeter comparison of rectangle
    int area,peri;
    printf("enter the area:");
    scanf("%d",&area);
    printf("enter the perimeter:");
    scanf("%d",&peri);
    if(area>peri)
    printf("area of rectangle is greater");
    if(area<peri)
    printf("perimeter is greater than the area");
    if(area==peri)
    printf("both are equal");
    return 0;
}
