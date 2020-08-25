#include<stdio.h>

 void main(){

   int n,sum=0;
  float avg;
  

    for(int i=1;i<=10;i++){

       printf("Enter the number \t ");
       scanf("%d",&n);

       sum=sum+i;
       avg=sum/10;
   }

     printf("The sum is %d \n",sum);
    
      printf("The Average is %f \n",avg);
  }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/25aug$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/25aug$ ./a.out
Enter the number 	 1
Enter the number 	 2
Enter the number 	 3
Enter the number 	 4
Enter the number 	 5
Enter the number 	 6
Enter the number 	 7
Enter the number 	 8
Enter the number 	 9
Enter the number 	 10
The sum is 55 
The Average is 5.000000 
*/
