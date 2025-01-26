//input/1.......//output/111
//input/2.......//output/211121112
//input/3.......//output/32112111232111211123
//and similarly for others //
 #include <stdio.h>
 void zigzag(int n){
    if(n==0) return;
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    return ;
 }
 int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    zigzag(n);

return 0;
 }
 //uses the concept of PreInPost//