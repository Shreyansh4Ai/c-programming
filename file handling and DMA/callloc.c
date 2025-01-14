#include<stdio.h>
#include<stdlib.h>
int main(){
      int*ptr;
      ptr=(int*)calloc(5,sizeof(int));


ptr[0]=4;     ///printing values from memory
   ptr[1]=3;
   ptr[2]=4;
   ptr[3]=9;
   ptr[4]=5;

   for(int i=0;i<5;i++){
    printf("%d\t",ptr[i]);
   }



    return 0;
}