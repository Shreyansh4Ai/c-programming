#include<stdio.h>
#include<string.h>
 typedef struct computersciencestudent{
    int roll;                               //typedef...>>>nickname maker 
    float cgpa;
    char name[100];
}css;


int main(){
   css s1;
   s1.roll=876;
   s1.cgpa=6.43;
   strcpy(s1.name,"faraday"); 
   printf("student name is %s",s1.name);
   
    return 0;
}