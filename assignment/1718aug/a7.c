#include<stdio.h>

void main(){

 char ch;

 printf("Enter Anything \n");
 scanf(" %c",&ch);
 
 if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
      printf("%c is vowel\n",ch); 
 else
       printf("It is constant \n"); 

}

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ cc a7.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter Anything 
e
e is vowel

*/
