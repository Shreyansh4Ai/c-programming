#include <stdio.h>
int main(){
    int a=25;
    int*x=a;//int*-->adress store krta h 
    int**y=&x;//int**---->int*ka adress store krta h 
    printf("%p\n",&x);
    printf("%p",*y);
    return 0;
}