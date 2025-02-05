#include<stdio.h>
int main(){
    char str[]="you are awesome";
    //size 
    int size =0; // for the size as you know //
    int k=0;  //this is for positions of elements//
    while (str[k]!='\0'){
    size++;
    k++;
    }
    printf("%d",size);
    return 0;
}