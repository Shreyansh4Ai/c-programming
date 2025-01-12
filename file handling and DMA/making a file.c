#include<stdio.h>
int main (){
    FILE*fptr;
    fptr=fopen("newbond.txt","w"); // writing and if file is not there then creating
    if (fptr==NULL){
        printf("file doesn't exist\n");
    }
    else{
        printf("file opened successfully");
        fclose(fptr);
    }
    
    return 0;
}