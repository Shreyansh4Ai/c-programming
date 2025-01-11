#include<stdio.h>
#include<math.h>
 void tower(int n,char s,char h,char d){  //s,h,d,are moves to replace the disks 
 if(n==0) return;
    tower(n-1,s,d,h); //helper and destination inter changes ]
    printf("%c ->> %c\n",s,d);//direct move koi dikkat nai 
    tower(n-1,h,s,d);// ab h source h aur s helper 
    return;
}

int main(){
     int n;
     printf("Enter the number of disk :");
     scanf("%d",&n);

    tower(n,'A','B','C');  ///A,B,C are the rods//

     
    return 0;
}