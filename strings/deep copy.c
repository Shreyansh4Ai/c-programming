#include<stdio.h>
int main(){
    char *s1="stupendous";
    char*s2;
    s2=s1;
    printf("%s",s1);
    s2="clever"; //for checking the copies 
    printf("\n%s",s2);
    printf("\n%p",s1);
     printf("\n%p",s2);
    return 0;
}
      ///////////conclusion......>>> deep copy has different adressss so the make different memory spaces
      