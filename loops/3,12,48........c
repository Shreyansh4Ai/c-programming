#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    int n=3;
    for(int i=1;i<=a;i++){
        printf("%d\n",n);
        n=n*4;
    }
    return 0;
}