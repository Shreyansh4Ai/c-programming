#include<stdio.h>
#include<string.h>
typedef struct address{
    int housenumber;
    char block[10];
    char city[20];
    char state[15];
}add;

 void location(add p1){  //copy p1 will act as variable and take value from p2,p3,p4,p5
    printf("house no.%d,block %s ,%s city ,state %s ",p1.housenumber,p1.block,p1.city,p1.state);
    return ;
}
int main(){
    add p1={02,"charoda","bhilai","chhattishgarh"};  //p1...> person 1
    location(p1);
    printf("\n");
    add p2={04,"naini","prayagraj","uttar pradesh"};
    location(p2);
    printf("\n");
    add p3={69,"c","arjuni","chhattishgarh"};
    location(p3);
    printf("\n");
    add p4={07,"bond","bilaspur","chhattishgarh"};
    location(p4);
    printf("\n");
    add p5={54,"tnt","hyderabad","telangana"};
    location(p5);
    return 0;
}