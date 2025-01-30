#include<stdio.h>
int main(){
    float age=22;
    float*ptr=&age;
    printf("ptr =%f\n",*ptr);
    ptr++; 
printf("ptr =%f\n",*ptr );
 ptr--;
 printf("ptr =%f",*ptr );
    return 0;
}