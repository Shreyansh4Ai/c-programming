#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[8]={1,2,3,4,5,6,7,8};
    int pairs=0;
    for(int i=0;i<8;i++){                      //nested loops ooh soo OP//
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j] == x){
                printf("(%d,%d)",arr[i],arr[j]);
                pairs++;
            }
        }
    }
    printf("\nThe total number of pairs equal to x=%d are %d",x,pairs);
    return 0;
}