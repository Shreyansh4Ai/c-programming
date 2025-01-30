#include<stdio.h>
int main(){
    int arr[7]={8,9,60,45,34,26,01};
    
    for( int i= 0;i<7;i++){
        if(i%2!=0) {
            arr[i]*=2;}  // odd index multiplied by 2 
    
    else{
        arr[i]+=10;  //even index increment by 10 
    }
    }
    for(int i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}