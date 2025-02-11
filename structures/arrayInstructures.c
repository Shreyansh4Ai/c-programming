#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
struct student s1 ={63,9.1," OG shreyansh"};    //saves line and code looks more easier and clear//
printf("student roll=%d\n",s1.roll);
printf("student cgpa=%.2f\n",s1.cgpa);
printf("student name=%s\n",s1.name);



    return 0;
}