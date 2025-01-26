#include<stdio.h>
int main (){
//2x3.....>>>2 is for students annd 3 for subjects //
int marks[2][3];//_ _ _| _ _ _//
marks[0][0]=90;//1st sub of 1st student 
marks[0][1]=87;//2nd sub of 1 st student 
marks[0][2]=89;//3rd sub of 1 st student

marks[1][0]=90;//1st sub of 2nd student 
marks[1][1]=78;//2nd sub of 2nd student 
marks[1][2]=98;//3rd sub of 2nd student

printf("%d\n",marks[0][0]);
printf("%d\n",marks[0][1]);
printf("%d\n",marks[0][2]);
printf("%d\n",marks[1][0]);
printf("%d\n",marks[1][1]);
printf("%d\n",marks[1][2]);
    return 0;
}