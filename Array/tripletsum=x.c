#include<stdio.h>
int main(){
    int x;
    printf("enter x:");
    scanf("%d",&x);
    int arr[7]={20,30,40,59,68,01,11,};
    int triplet=0;
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            for(int k=j+1;k<7;k++){
                  if(arr[i]+arr[j]+arr[k] == x){
                printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                    triplet++;
                  }
            }
        }
    }
    printf("\nTotal triplets =%d",triplet);
    return 0;
}