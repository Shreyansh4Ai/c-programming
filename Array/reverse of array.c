#include<stdio.h>

void reverse(int arr[],int n){
      
    for(int i=10;i<n/2;i++){                    getting wrong outputs
       int firstval=arr[i];
      int  secondval=arr[n-i-1];
          arr[i]=secondval;
         arr[n-i-1]=firstval;
    }
    return ;
}
void printarr(int arr[],int n){
  for(int i =0;i<n;i++){
    printf("%d\t",arr[i]);
    
  }
  return;
}
int main(){

  int arr[10]={1,2,3,4,5};
   
  reverse(arr,5);
  printarr(arr,5);

    return 0;
}