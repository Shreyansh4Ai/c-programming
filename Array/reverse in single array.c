#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=6;//indices of array
    while(i<=j){               //for(int i=0,int j=0;i<j;i++,j++)
        int temp=arr[i];             //perform swapping
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr);
    for(int i=0;i<7;i++){
         printf("%d",arr[i]); }
    return 0;
}