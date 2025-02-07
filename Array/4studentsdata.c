#include<stdio.h>
int main(){ // INCORRECT NEEdS TO BE DEBUGGED//
   int marks[4][2]={{1,2,3,4},{23,24,45,67}}; // 4 rows =students 2columns is for roll no and marks
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d  ",marks[i][j]);
        }
        printf("\n");
    } 
    return 0;
}