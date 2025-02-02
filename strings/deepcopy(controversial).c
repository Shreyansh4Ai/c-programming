#include<stdio.h>
int main(){
    char s1[]=" she likes cabbage";
    char s2[]="she likes tarbage";
    s2[10]='G';
    printf("%s",s1);
    printf("\n%s",s2);
     printf("\n%p",s1);
    printf("\n%p",s2);
    return 0;
}
//different prints with different addresss //different memory allocation