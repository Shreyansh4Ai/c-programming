#include<stdio.h>
int main(){
    char arr[]={'h','e','l','L','o','\0'};         //string------>>> is nothing but character array
    printf("%c",arr[0]);        //character printing
    printf("\n%p",arr[1]);
     printf("\n%p",arr[2]); //address of  character printing//
      printf("\n%p",arr[3]);
    return 0;
}
//when i use %d in printf i get ascii value of that character//
//when i use %d and arr[5] it gets the null character and prints 0 //
//but when i use the %c it prints nothing as it is a null chaaracter --->> which means nothing//