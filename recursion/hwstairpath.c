//tripple steps also allowed
#include<stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;///(1)>>1 way     //(1+1,2)...>>2ways
    if(n==3) return 4; //(1+1+1,1+2,2+1,3)>>>>4ways
    int totalways=stair(n-1)+stair(n-2) +stair(n-3);  //recursion//
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
                     //very good question due to the base case// 