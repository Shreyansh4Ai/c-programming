#include<stdio.h>
#include<stdlib.h>

int main(){
            float*ptr;
            ptr=(float*)malloc(5*sizeof(float));

    ptr[0]=3.456;
    ptr[1]=6.768;
    ptr[2]=98.67;
    ptr[3]=534.4;
    ptr[4]=93.657;

    for(int i=0;i<5;i++){
        printf("%.3f\t",ptr[i]);
    }



    return 0;
}