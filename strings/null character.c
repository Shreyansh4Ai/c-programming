#include<stdio.h>       // using null character to [print hello world]//
int main(){
    char arr[]={'H','E','L','L','O','\0'};
    int i=0;
    while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
    }
    return 0;
}
    
    //now we can use anything in place of using \0 we can replace it by any character  like !,@,#,$,%.