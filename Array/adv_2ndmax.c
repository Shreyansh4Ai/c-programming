#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={9,7,65,70,59,};
    int max=INT_MIN;
    int smax=INT_MIN; // second max
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
   printf("the largest value is %d\n",max);
   printf("the second largest value is %d",smax);
    return 0;
}