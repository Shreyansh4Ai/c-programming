#include<stdio.h> //we have 3 items here with 18%GST//
int main(){
float cost [3];
printf("enter the respective prices:");
scanf("%f",&cost[0]);
scanf("%f",&cost[1]);
scanf("%f",&cost[2]);

printf("total price of 1st item=%f\n",cost[0]+((0.18)*cost[0]));
printf("total price of 2 nd item =%f\n",cost[1]+((0.18)*cost[1]));
printf("total price of 3rd item=%f",cost[2]+((0.18)*cost[2]));

    return 0;
}