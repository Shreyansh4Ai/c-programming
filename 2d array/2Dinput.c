#include<stdio.h>
int main(){
    int n,k;
    printf("enter n and k");
    scanf("%d",&n);  //no of rows 
    scanf("%d",&k);   // no of columns 
    int arr[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&arr[i][j]);
         }
    }
  
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}