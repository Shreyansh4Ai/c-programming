#include<stdio.h>
int main (){
        int arr[7]={1,2,3,4,5,6,7};
        int  x=5;
    for(int i=0;i<7;i++){
        if(arr[i]==x) {
            printf("%d is present in the array and its index is %d",x,i);
    }
    }
    return 0;
}