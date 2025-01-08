#include<stdio.h>
int main(){
   int a,b,c;
    printf("entered value of a=");
    scanf("%d",&a);
    printf("entered value of b=");
    scanf("%d",&b);
    printf("entered value of c=");
    scanf("%d",&c);
    if(a>b){ // b is not in the race //
        if(a>c)
        printf("a is the greatest");
        else
        printf("c is the greatest");
    }
    else{ // a is out of race now //
        if(b>c)
        printf("b is the greatest");
        else
        printf("c is the greatest");
    }
    return 0;
}