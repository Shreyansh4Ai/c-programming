
 //fibonnacci series 1 1 2 3 5 8 13 21............n term //
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int a=1;
    printf("%d\n",a);
    int b=1;
    printf("%d",b);
    int sum=1; ///crucial line///
    for(int i=1;i<=n-2;i++){///we are getting n+2 thn term to compensate we have done -2//
        sum=a+b;
        a=b;           //order is very important//
        b=sum;
printf("\n%d",sum);  /// yay! you got the series //
    }
    return 0;
}