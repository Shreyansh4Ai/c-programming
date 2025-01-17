#include <stdio.h>
int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 int product=1;
 for(int i=1;i<=n;i++){
 product=product*i;
 
 printf("\n the factorial of %d is: %d",i,product);
 }
    return 0;
}