#include<stdio.h>
int main(){
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        if(i%2==!0)
        printf("%d\n",i);
    }
}