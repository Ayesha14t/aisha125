#include<stdio.h>

 void main(){

   int n,sum=0;
  
   printf("Enter the number \t ");
   scanf("%d",&n);

    for(int i=1;i<=n;i++){

       sum=sum+i;
   }

     printf("The sum is %d \n",sum);
  }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/25aug$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/25aug$ ./a.out
Enter the number 	 10
The sum is 55 
*/
