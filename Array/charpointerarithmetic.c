#include<stdio.h>
int main(){
    char star='*';
    char*ptr=&star;
    printf("ptr =%c\n",*ptr);
    ptr++;
printf("ptr =%c\n",*ptr );
 ptr--;
 printf("ptr =%c",*ptr );
    return 0;
}