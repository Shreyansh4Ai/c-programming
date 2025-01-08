#include <stdio.h>
int main(){
    int cp,sp;
    printf("enter the cost price");
    scanf("%d",&cp);
    printf("enter the selling price");
    scanf("%d",&sp);
    if(cp>sp){
printf("loss");
}
if(sp>cp){
printf("Profit");
}
if(cp==sp){
printf("no profit no loss");
}
return 0;
}