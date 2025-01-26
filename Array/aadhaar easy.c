#include<stdio.h>
int main(){
    int aadhaar[5];
    //input
    int*ptr=&aadhaar[0];
    for(int i=0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",&aadhaar[i]);
    }
    //output
    for(int i=0;i<5;i++){
        printf("%d index : %d\n",i,aadhaar[i]);

    }
    return 0;
}