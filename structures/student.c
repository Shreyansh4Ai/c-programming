#include<stdio.h>
#include<string.h>
struct student{ 
    char name[100];                         //structure//
int roll;
float cgpa;

};
int main(){
  struct student s1;
  s1.roll=1664;
  s1.cgpa=87.8;                  //.is property operator 
  strcpy(s1.name,"shreyansh");
  //s1.name="shreyansh";
  printf("student name=%s\n",s1.name);
  printf("student roll=%d\n",s1.roll);
  printf("student cgpa=%f\n",s1.cgpa);

    return 0;
}