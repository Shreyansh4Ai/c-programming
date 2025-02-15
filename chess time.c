#include <stdio.h>
 //code chef problem 
int main() {
	// your code goes here
int t;
scanf("%d",&t);
while(t--){
    int x;
    scanf("%d",&x);
    x=x*60; //conversion of time 
    int y=x/20;
    printf("%d\n",y);
}
return 0;
}

