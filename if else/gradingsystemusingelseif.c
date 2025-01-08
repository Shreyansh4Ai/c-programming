#include<stdio.h>
int main(){
    int n;
    printf("eneter the percentage:");
    scanf("%d",&n);
    if(n>80 && n<100){
    printf("A grade");}
else if(n>60 && n<100 ){
      printf("B grade");}
else if (n>40 && n<100){
      printf("C grade");}
else if (n<=40 && n<100 ){
      printf("fail");}
    return 0;
}