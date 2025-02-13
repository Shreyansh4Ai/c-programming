#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
void printInfo(struct student s1){     //clone /copy of s1 //
    printf("student name=%s\n",s1.name);
    printf("student roll=%d\n",s1.roll);
    printf("student cgpa=%.2f\n",s1.cgpa);
}

int main(){
    struct student s1={1448,7.43,"seniorita"};
    printInfo(s1);
    struct student s2={1456,6.79,"brad pitt"};
    printInfo(s2);
    return 0;
}