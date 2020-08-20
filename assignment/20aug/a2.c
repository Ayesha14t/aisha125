#include<stdio.h>

void main(){

  int t;

  float si,b,r;

  printf("Enter the money you want to borrow\n");
  scanf("%f",&b);

  printf("Enter the time in min \n ");
  scanf("%d",&t);

  printf("Enter the rate of interest ");
  scanf("%f",&r);

 
  r=r/10;
  t=t*60;
 
  si=(b*t*r)/100;

  printf("The simple interest is %.2f \n",si);
  
}


/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ ./a.out
Enter the money you want to borrow
100000
Enter the time in min 
 10000
Enter the rate of interest 1
The simple interest is 60000004.00 

*/
