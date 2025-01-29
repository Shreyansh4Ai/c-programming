#include<stdio.h>                 //count greater than x //
int main(){
    int x;
    scanf("%d",&x);
    int arr[9]={34,54,6,5,78,65,98,86,07};
    int count=0;
    for(int i=0;i<9;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("total number of elements greater than x=%d is %d",x,count);
    return 0;
}