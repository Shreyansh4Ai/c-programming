#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("newbond.txt","w");//writing now 

    
    fprintf(fptr,"%c",'v');
    fprintf(fptr,"%c",'e');
    fprintf(fptr,"%c",'s');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'e');
    fprintf(fptr,"%c",'r');


fclose(fptr);


return 0;
}