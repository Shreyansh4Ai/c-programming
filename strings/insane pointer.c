#include<stdio.h>
int main (){
    char str[]="all i said that day is to escape the situation";
    char*ptr=str;
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);  //printing character by character //                                     
        ptr++;
        i++;
    }
    return 0;
}
    //it prints the whole string //amazing...//