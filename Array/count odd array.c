#include<stdio.h>
int countOdd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 !=0){
            count++;
        }

    }
    return count;
}
int main(){

  int arr[10]={1,2,3,4,5,6,7,8,9,0};
   
   printf("%d",countOdd(arr,10));


    return 0;
}