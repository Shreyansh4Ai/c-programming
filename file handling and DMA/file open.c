#include<stdio.h>
int main (){
    FILE*fptr;
    fptr=fopen("bond.txt","r"); //for reading 
    if (fptr==NULL){
        printf("file doesn't exist\n");
    }
    else{
        printf("file opened successfully");
        fclose(fptr);
    }
    
    return 0;
}