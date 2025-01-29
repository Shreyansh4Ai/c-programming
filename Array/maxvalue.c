#include<stdio.h>
int main(){
    
    int arr[7]={1,65,73,89,76,34,46};
    int max=arr[0];
    for(int i=1;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
       
    }
     printf("the maxvalue in the following array is %d",max);
    return 0;
}        //also works with negative numbers //