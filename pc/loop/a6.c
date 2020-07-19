#include<stdio.h>

 void main(){
 
      int sum=0,n;
      int mul=1;


    printf("Please Enter the number \n");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){

		sum=sum+i;
        
        }
     printf("Sum of all Natural no from 1 to %d is %d \n",n,sum);
 

  }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a6.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
Please Enter the number 
10
Sum of all Natural no from 1 to 10 is 55 
*/

