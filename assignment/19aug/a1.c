#include<stdio.h>

void main(){

 char ch ;
 int ans;

  printf("Enter Any Character \n");
  scanf(" %c",&ch);

  (ch>=65&&ch<=90)? printf("%c is in upper case \n ",ch) : printf("%c is in lower case \n",ch) ; 



 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/19aug$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/19aug$ ./a.out
Enter Any Character 
v
v is in lower case

*/
