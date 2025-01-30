#include<stdio.h>
int main(){
    int arr[5]={4,7,8,1,5};
    int product=1;
    for(int i=0;i<5;i++){
    product = product*arr[i];
    }
    printf("the product of all elements is %d",product);
    return 0;
}