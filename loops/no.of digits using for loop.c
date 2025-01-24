#include<stdio.h>
int main(){
    int n;
       printf("enter a number :");
       scanf("%d",&n);
       int  count;
       for(count=0;n!=0;count++){
       n=n/10;
       }
       printf("the number of digits are %d",count);
    return 0;
}