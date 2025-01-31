#include<stdio.h>
int main(){
    int arr[5]={12,46,57,32,17,};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("sum of all elements os an array is %d",sum);
    return 0;
}