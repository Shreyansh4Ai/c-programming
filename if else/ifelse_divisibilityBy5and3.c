#include<stdio.h>
//NESTED IF ESLE
int main(){
  int n;
    printf("enter a number:");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0) {
      if(n%15!=0){
        printf("the number is divisible by 5 or 3 but not by 15 ");
    }
    else
    {
        printf("the number is divisible by 5 or 3 and it is divisible by 15");
    }
    }
    return 0;
    }