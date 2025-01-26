#include<stdio.h>
int main(){
    int a,b;
    printf("enter the base :");
    scanf("%d",&a);
    printf("enter the power :");
    scanf("%d",&b);
    int power=1; //crucial initialisation//
    for(int i =1;i<=b;i++){
        power =power*a;
    }
    printf(" %d raise to the power %d is equals to :%d",a,b,power);
    return 0;
}