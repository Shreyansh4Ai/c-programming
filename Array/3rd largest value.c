#include<stdio.h>
#include<limits.h>
int main(){

    int arr[10]={49,76,57,77,7,27,75,77,90,90,};
    int max=INT_MIN;   //max==largest
    int smax=INT_MIN;   // second largest
    int tmax=INT_MIN;  //third largest
    for(int i=0;i<10;i++){
        if(max<arr[i]){      // for max 
            tmax=smax;
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){  //for 2nd max 
            tmax=smax;
            smax=arr[i];
        }
        else if(tmax<arr[i] && smax!=arr[i] && max!=arr[i]){  //critical part #3rd max 
            tmax=arr[i];
        }
       
    }
    printf("largest:%d\n",max);
       printf("second largest :%d\n",smax);
       printf("third largest:%d",tmax); 
    return 0;
}            /// perfectly working babe !!!//