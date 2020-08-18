#include<stdio.h>


 void main(){
 
 int a,ans;

 printf("Enter the no \n");
 scanf("%d",&a);

  if(a%5==0 && a%11==0)
 
     printf("%d is divisible by 5 & 11\n",a);

 else
 
      printf("%d is not divisible by 5 & 11\n",a);

 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter the no 
55
55 is divisible by 5 & 11


*/
