#include<stdio.h>    //sum of even and odd indices and then difference bt the indices 
int main(){
    int arr[6]={45,34,22,82,83,17};
    int oddsum=0;
    int evensum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }
    }
     unsigned int diff=oddsum - evensum;
    printf("the difference between oddsum=%d and evensum=%d is %d",oddsum,evensum,diff);
    return 0;
}