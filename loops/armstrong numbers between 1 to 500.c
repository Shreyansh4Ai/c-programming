#include<stdio.h>
///armstrong no. ex 153 that is 1cube*5cube*3cube=153
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int lastdigit=1;
    int sum=0;
    int originalvalue=n;
    while(n!=0){
        lastdigit=n%10;
        n=n/10;
        sum=sum+lastdigit*lastdigit*lastdigit;
    }
    printf("%d\n",sum);
    if(sum==originalvalue){
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");
    }
    return 0;
}