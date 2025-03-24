#include<stdio.h>
int main(){
    start:
    printf("Infinite loop\n");
    goto start;
    return 0;
}