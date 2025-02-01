#include<stdio.h>
void england(){
    printf("you are in england\n");//6
    return;//7
}
void australia(){
    printf("you are in australia\n");//4
    england();//caling england //5
    return;//8
}
void India(){
    printf("you are in INDIA\n");  //2
    australia();//calling australia //3
    return;//9
}
int main(){
    India();//calling india  //1
    return 0;//10
}
//order/sequence matters in functions//