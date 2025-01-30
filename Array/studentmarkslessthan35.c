#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("mathematics marks of student %d\n",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<10;i++){
        if(arr[i]<=35){
            printf("roll number :%p\n",arr[i]);
        }
       else{
         printf("%d\t",arr[i]);
    }
    }
    return 0;
    
}