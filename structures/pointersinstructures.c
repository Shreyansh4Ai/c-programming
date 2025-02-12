#include<stdio.h>
struct student {
    int roll;
    float cgpa;
    char name [100];
};
int main (){
         struct student s1={87,9.8," slim shaddy"};
         struct student *ptr=&s1;
         printf("student name=%s\n",(*ptr).name);
         printf("student cgpa=%.2f",ptr->cgpa);  ///arrow operator//

    return 0;
}