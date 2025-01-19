#include<stdio.h>
int main(){
      int n;
      printf("enter a number:");
      scanf("%d",&n);
      int rev=0;
      int lastdigit=0;
      int sum =n;
      while(n>0){
         rev=rev*10;
        rev=rev+(n%10);
        n=n/10; 
      }
      printf("the reverse of the given no is %d",rev);
      sum=(sum+rev);
      printf("\nthe sum of the number and its reverse is %d",sum);
     return 0; 
}