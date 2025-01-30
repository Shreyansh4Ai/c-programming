#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={24,54,87,19,63,55,47,};
    int min=INT_MAX; //sabse badi value //
    for(int i=0;i<7;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("the minimum element is %d",min);
    return 0;
}