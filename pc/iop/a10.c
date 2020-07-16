#include<stdio.h>


void main(){

   float hour,min;
   float total;

   printf("Enter the Time in minutes \n" );
   scanf("%f",&min);
   
   total=min/60;
   min=min/15;
   printf("Time in hours  is %.2f hours , %.2f min \n",total ,min);
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ cc a10.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ ./a.out
Enter the Time in minutes 
452
Time in hours  is 7.53 hours , 30.13 min 
*/
