#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%5==0){
    if(n%3==0)
    printf("the no. is divisible by both 5 and 3,");
    else
    printf("the no. is not divisible by both 5 and 3,");
  if(n%15==0)
  printf("the no. is also  divisible by 15");
  else
  printf("the no. is not divisible by 15");
    }
    else
    printf("the no. is not divisible by 3,5and15 all at a time ");
    
    return 0;
}