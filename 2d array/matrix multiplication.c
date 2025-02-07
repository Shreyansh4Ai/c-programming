#include<stdio.h>
int main (){
     int m;
     printf("Enter the row of 1st matrix:");
     scanf("%d",&m);
     int n;
     printf("\nEnter the column of 1st matrix:");
     scanf("%d",&n);
     //input 1st matrix//
     int a[m][n];
     printf("\nenter the elements of 1st matrix:");
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
     }
     int p;
     printf("\nenter the row of 2nd matrix:");
     scanf("%d",&p);
     int q;
     printf("\nenter the column of 2nd matrix:");
     scanf("%d",&q);
     //input 2nd matrix//
     int b[p][q];
     printf("\n enter the elements of 2nd matrix:");
     for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
     }
     if(n!=p) printf("matrix multiplication not possible ");
     else{//multiplication//
     int res[m][q];
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]=(a[i][k])*b[k][i];
            }
        }
     }
     //print final matrix 
     printf("the final matrix is:\n");
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
     }
     }
    return 0;
}