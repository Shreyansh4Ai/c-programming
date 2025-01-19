#include<stdio.h>
int main(){
int a;
printf("enter a number :");
scanf("%d",&a);
float n=100;
for(int i=1;i<=a;i++){
  printf("%f\n",n);
    n=n*(0.5);
}

    return 0;

}