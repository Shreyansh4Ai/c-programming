#include<stdio.h>
int main(){
    char str[]="make her feel degret";
    //str[14]='R';  //this is the way to make change in a string// 
    str[14]=82;   //this one is using ascii value for letter//
    printf("%s",str);
    return 0;


}