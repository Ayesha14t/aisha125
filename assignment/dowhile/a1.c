#include<stdio.h>
#include<stdlib.h>

void main(){

    int mul1, mul2,ans=1;

    printf("Enter Any two Number \n");
    scanf("%d",&mul1);
    scanf("%d",&mul2);

do{
    
     ans=mul1*mul2;
  
 }while(0);

    printf("%d\n",ans);
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
Enter Any two Number 
2
3
6

*/
