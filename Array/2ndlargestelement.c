#include<stdio.h>
#include<limits.h>
int main (){
    int arr[7]={41,14,209,5,4,17,20};
    int max=arr[0];
    int secmax=INT_MIN;  //second largest
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    /// second max//
    for(int i=0;i<7;i++){
        if(secmax<arr[i] && arr[i]!=max){
            secmax=arr[i];
        }
    }
     printf("\n%d",secmax);
    return 0;
}