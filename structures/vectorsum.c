#include<stdio.h>
struct vector{
    int x;
    int y;
    int z;
};
void calsum(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    sum.z=v1.z+v2.z;

    printf("the vector sum is {%d,%d,%d}\n",sum.x,sum.y,sum.z);
    
    
    return;
}
void caldiff(struct vector v1,struct vector v2,struct vector diff){
    diff.x=v2.x-v1.x;
    diff.y=v2.y-v1.y;
    diff.z=v2.z-v1.z;

    printf("the vector difference is {%d,%d,%d}\n",diff.x,diff.y,diff.z);
    
    return;
}
int main(){
   struct vector v1={3,4,5};
   printf("the vector v1 {%d,%d,%d}\n",v1.x,v1.y,v1.z);
   struct vector v2={5,7,9};
   printf("the vector v2 {%d,%d,%d}\n",v2.x,v2.y,v2.z);
   struct vector sum={0};
   struct vector diff={0};
   calsum(v1,v2,sum);
   caldiff(v1,v2,diff);
return 0;
}
