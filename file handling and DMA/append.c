#include<stdio.h>
int main ()
{
    FILE *fptr;
    fptr=fopen("newbond.txt","a");//append

    fprintf(fptr,"%c",'l');
    fprintf(fptr,"%c",'y');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'d');
    fclose(fptr);

    return 0;
}