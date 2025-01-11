#include<stdio.h>
int pwr(int a,int b){
    if(b==0) return 1;
    int recans=a*pwr(a,b-1);
    return recans;
}

int main(){
    int a;
    printf("enter the base:");
    scanf("%d",&a);
    int b;
    printf("enter the power :");
    scanf("%d",&b);
    int power =pwr(a,b);
    printf("%d",power);
    return 0;
}