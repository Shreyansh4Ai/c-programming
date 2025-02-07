#include<stdio.h>                //INCORRECT CODE NEEDED TO BE CORRECTED //
void check(int arr[]){
    int i=0;
    int j=5;  //array indexing
    while(i<=j){
       if(arr[i]=arr[j]){   
       i++;
       j--;
       printf("its a pallindrome");
       }
    else printf("it is not a pallindrome ");

    }

    return;
}
int main(){
    int arr[6]={2,6,4,4,3,2};
    check(arr);
   
    return 0;
}