#include<stdio.h>
int main(){
    int x1,y1;
    printf("values of x1,y1:");
    scanf("%d,%d",&x1,&y1);
    int x2,y2;
    printf("values of x2,y2:");
    scanf("%d,%d",&x2,&y2);
    int x3,y3;
    printf("values of x3,y3:");
    scanf("%d,%d",&x3,&y3);
    double m1;
    m1=(y2-y1)/(x2-x1);
    double m2;
    m2=(y3-y2)/(x3-x2);
    if(m1=m2)
    printf("all the points lie in the same line ");
    else
    printf("they dont lie on the same line ");

    return 0;
}