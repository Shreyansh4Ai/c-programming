#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll=60;
    s1.cgpa=7.2;
    strcpy(s1.name,"nitesh");
     
     printf("student name=%s\n",s1.name);
     printf("student roll=%d\n",s1.roll);
     printf("student cgpa=%.2f\n",s1.cgpa);
printf("\n");
     struct student s2;
     s2.roll=69;
     s2.cgpa=7.5;
     strcpy(s2.name,"vaibhav");
printf("\n");
     printf("student name=%s\n",s2.name);
     printf("student roll=%d\n",s2.roll);
     printf("student cgpa=%.2f\n",s2.cgpa);
printf("\n");
     struct student s3;
     s3.roll=63;
     s3.cgpa=10.0;
     strcpy(s3.name,"smart shrey");
printf("\n");
     printf("student name=%s\n",s3.name);
     printf("student roll=%d\n",s3.roll);
     printf("student cgpa=%.2f\n",s3.cgpa);

    return 0;
}