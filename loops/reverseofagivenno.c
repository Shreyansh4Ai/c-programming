#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int rev=0;
    while(n>0){
        rev=rev*10;
        rev=rev+(n%10);
        n=n/10;
    }
    
    printf("the reverse of the given number is %d",rev);
    return 0;
}