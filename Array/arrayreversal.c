#include<stdio.h>
int main (){
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<7;i++){
        brr[i]=arr[6-i];  //array ka index k size se minus krna h //
        printf("%d\n",brr[i]);
    }
    return 0;
}