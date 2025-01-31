#include<stdio.h>
int main(){
  int age1=22 ;
  int age2=23;
  int*ptr=&age1;
int*_ptr=&age2;
 printf("the difference=%u\n",ptr-_ptr);///difference of pointers
 _ptr=&age1;
 printf("the comparison=%u\n",ptr==_ptr); //comaprison of pointer gives answer in 1 or o that is true/false
    return 0;
}