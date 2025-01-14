#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("casinoRoyal.txt","r");
    if(fptr==NULL){
        printf("error opening the file .\n");
        return 1;  //shows program encoutered an error//
    }
    char ch;
    ch=fgetc(fptr); //1st chsracter ko ch m store krra re h
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
        
    }
    printf("\n");
    fclose(fptr);
    return 0;
}