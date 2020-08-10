#include<stdio.h>

void main(){

 int num,var=0,first=0,last=0;

 printf("Enter the Number \n");
 scanf("%d",&num);
 
 first=num/100;
 last=num%10;
 
 printf("first no is %d\nlast no is %d\n",first,last);

 }

/*

aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/10aug$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/10aug$ ./a.out
Enter the Number 
123
first no is 1
last no is 3

*/
