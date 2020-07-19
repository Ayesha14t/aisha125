#include<stdio.h>

 void main(){
 
      int sum=0,n;
      int mul=1;


    printf("Please Enter the number \n");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){

       if(i%2==0)

		sum=sum+i;
        
        }
     printf("Sum of all even no from 1 to %d is %d \n",n,sum);
 

    for(int i=1;i<=n;i++){

       if(i%2!=0)

		mul=mul*i;
        
        }
     printf("Multiplication of all odd no from 1 to %d is %d \n",n,mul);


  }

 /*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
Please Enter the number 
10 
Sum of all even no from 1 to 10 is 30 
Multiplication of all odd no from 1 to 10 is 945 
*/
