#include<stdio.h>


void main(){

   float hour,min;
   float total;

   printf("Enter the Time to convert it in minutes \n" );
   scanf("%f%f",&hour,&min);
   
   total=(hour*60)+min;
   printf("Time in Minutes is %f minutes \n",total);
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ ./a.out
Enter the Time to convert it in minutes 
2
30
Time in Minutes is 150.000000 minutes 
*/
