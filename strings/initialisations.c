#include<stdio.h>
int main(){
    char str[]="she looks good in pink";
    char*ptr=str;
    ptr="she looks worst in pink";

    printf("%s",str);
    return 0;
}