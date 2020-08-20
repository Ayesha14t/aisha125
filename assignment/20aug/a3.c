#include<stdio.h>


 void main(){

  int year;

  printf("Enter the year \n");
  scanf("%d",&year);

  if(year/2==0 && year%400==0)
  
    printf("%d is a Leap Year \n",year);


  else if(year%4==0)
 
     
     printf("%d is Leap Year \n",year);

  else 

     printf("%d is not a leap year \n",year);
 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ ./a.out
Enter the year 
2000
2000 is Leap Year 
*/
