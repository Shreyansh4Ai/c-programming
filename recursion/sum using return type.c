 #include<stdio.h>              //sum = 5+4+3+2+1//
 int sum(int n){
    if(n==0 || n==1) return n;
    int recans=n+sum(n-1);
    return recans;
 }
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int fact=sum(n);
    printf("%d",fact);
    return 0;
}