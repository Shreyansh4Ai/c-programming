#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=(n-1);i++){
        printf("enter the %d number",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;

}