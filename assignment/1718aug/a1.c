#include<stdio.h>

void main(){
 
  int a,b,c;

  printf("Enter Two numbers \n");
  scanf("%d%d",&a,&b);

  c=a>b?a:b;
 
  printf("%d is greater among both \n",c);
 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter Two numbers 
12
15
15 is greater among both 
*/
