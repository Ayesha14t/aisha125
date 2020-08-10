#include <stdio.h> 

int main() 
{ 
   int x = 2; 
   switch (x++ + ++x) 
   { 
       case 1: 
		printf("Choice is 1"); 
                break; 

       case 2: 
		printf("Choice is 2"); 
                printf("Welcome\n");

       case 3:
		 printf("Choice is 3\n"); 
                 

       default:

		 printf("Choice other than 1, 2 and 3\n"); 
                break;   
   } 
   return 0; 
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/1july$ cc a7.c
aishatandekar@predatoraisha-VirtualBox:~/pc/1july$ ./a.out
Choice other than 1, 2 and 3*/
