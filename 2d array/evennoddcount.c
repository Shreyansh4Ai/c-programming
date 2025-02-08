#include<stdio.h>
int main(){
    int a; //rows
    scanf("%d",&a);
    int b;//columns
    scanf("%d",&b);
    int arr[a][b];
    //input
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //check
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j] % 2 ==0){
                evencount++;
            }
            else{
                oddcount++;
            }
        }
    }
    printf("total even=%d\n",evencount);
    printf("odd count=%d",oddcount);
    return 0;
}