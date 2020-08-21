#include<stdio.h>

 void main(){

  int radius ;
  float area;
 
  printf("Enter the Radius \n ");
  scanf("%d",&radius);

  area=3.14*3.14*radius;

  printf("Area of Circle is %f .\n",area);



 }

/*

aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/21aug$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/21aug$ ./a.out
Enter the Radius 
 25
Area of Circle is 246.490005 .

*/
