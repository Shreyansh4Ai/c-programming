#include<stdio.h>
void increasing(int n){
    if(n==0)  //base case
    return;
printf("%d\n",n); // decreasing 
    increasing(n-1);
    printf("%d\n",n); //increasing
    return;
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
     increasing(n);
     return 0;
}