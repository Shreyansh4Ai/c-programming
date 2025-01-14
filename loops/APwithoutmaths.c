#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");//jitti values print karni h 
    scanf("%d",&a);
    //1,3,5........
    //we are going to add extra variables
    int n=1;
    for(int i=1;i<=a;i++){
        printf("%d\n",n);
        n=n+2;  
    }
return 0;
}
