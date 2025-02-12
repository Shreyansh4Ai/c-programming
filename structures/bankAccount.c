#include<stdio.h>
typedef struct bankAccount{
    char name[100];
    int accountNo;
    int balance ;

}bnk;
int main(){
    bnk c1={"tom cruise",2022367,4596886};
    printf("name=%s \naccount no.=%d \nbalance=$%d/-only\n\n",c1.name,c1.accountNo,c1.balance);

     bnk c2={"san andreas",2354646,999948474};
    printf("name=%s \naccount no.=%d \nbalance=$%d/-only",c2.name,c2.accountNo,c2.balance);
    return 0;
}