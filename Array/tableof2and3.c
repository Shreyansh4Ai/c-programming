#include<stdio.h>
void storetables(int arr[][10],int n ,int m,int number){// phela array ko pointer ki trh mn leta h but 2d array m 2nd wala aray consider hota rehta h 
    for(int i=0;i<m;i++){
        arr[n][i]=number*(i+1);
    }
}
int main(){
     int tables[2][10];
     storetables(tables,0,10,2);
      storetables(tables,1,10,3);

    for(int i=0;i<10;i++){
        printf("%d\t",tables[0][i]);
    }
    printf("\n");
        for(int i=0;i<10;i++){
       printf("%d\t",tables[1][i]);
        }

    return 0;
}