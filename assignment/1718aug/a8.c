#include<stdio.h>

void main(){

 char ch;

 printf("Enter Anything \n");
 scanf(" %c",&ch);
 
 if(ch>64 && ch<123)
      printf("%c is alphabet",ch);
 else
       printf("%c is special character\n",ch); 

}


/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ cc a8.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter Anything 
*
* is special character

*/
