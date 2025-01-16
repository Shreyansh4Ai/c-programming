#include<stdio.h>
int main (){
    int n=100;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){//even
        //i is the factor of n
        continue;
        }
    
    printf("%d\n",i);
    }
    return 0;
}

//outputs odd no'


///continue///
//// skip the round and run the loop forward///