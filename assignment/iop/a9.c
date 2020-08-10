#include<stdio.h>


void main(){

   int num1;
   _Bool flag;

   printf("Enter the Number \n" );
   scanf("%d",&num1);
   
   for(int i=1;i<50;i++){
 		
	if(num1%i==0)

            		flag=1;
 		
        else 
    			flag=0;

     }
   if(flag==0) 

       printf("%d is a prime no \n",num1);

   else
	 printf("%d is not prime no \n",num1);

 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ cc a9.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ ./a.out
Enter the Number 
5
5 is a prime no 
*/
