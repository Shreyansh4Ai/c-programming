#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("writeoddNumbers.txt","w");
    int n;
  printf("enter  a number :");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    if(i%2!=0){
        printf("%d",i);
    
    fprintf(fptr,"%d\t",i);
    }
  }
     printf("\n");
     fclose(fptr);
    return 0;
}