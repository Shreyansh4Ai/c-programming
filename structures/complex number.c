#include<stdio.h>
struct complex{
       int real;
       int img;

};

int main(){
    struct complex number1={5,8};
     struct complex *ptr=&number1;
     printf("complex number1 {%d,%d}",ptr->real,ptr->img);
     printf("\n");
     struct complex number2={4,9};
     struct complex *_ptr=&number2;
     printf("complex number2 {%d,%d}\n",_ptr->real,_ptr->img);
    
     return 0;
}