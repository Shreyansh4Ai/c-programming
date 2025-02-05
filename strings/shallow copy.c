#include<stdio.h>
int main(){
    char s1[]="she likes to play with toys";
    char*s2=s1;
    //lets change in s1//
    s1[23]='B';
    printf("%s",s2);
    printf("\n%p",s1);
    printf("\n%p",s2);
    return 0;


} 
////////conclusion......>>> shallow copy has same adressss like  s1...>>00000000005FFE70
///s2......>>>>00000000005FFE70
