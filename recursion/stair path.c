#include<stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    int totalways=stair(n-1)+stair(n-2);  //recursion//
    return totalways;
}
int main(){
   int n;
   printf("Enter number of stairs :");
   scanf("%d",&n);
   int ways=stair(n);
   printf("%d",ways);
    return 0;
}