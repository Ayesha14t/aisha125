#include<stdio.h>

void main()
{
 int choice = 1 ;
 int a = 2;
 switch(choice)
 {

  case 1 :
        printf("I am in case 1.1");
        break;

  case 2 :
        printf("I am in case 1.2");
        break;

  case 'a' :
        printf("I am in case A");
        break;
 }
}

/*
aishatandekar@predatoraisha-VirtualBox:~/pc/2july$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/pc/2july$ ./a.out
I am in case 1.1*/
