#include <stdio.h>
 
int main () {

   
   char grade = 'C';

   switch(grade) {

      case 'A' :

       		  printf("Excellent!\n" );
      		   break;
      case 'B' :


      case 'C' :
       		  printf("Well done\n" );
         	  break;

      case 'D' :
       		  printf("You passed\n" );
      	           break;

      case 'F' :
        	  printf("Better try again\n" );
       	 	   break;
    
     default :
          	 printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );
 
   return 0;
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/1july$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/pc/1july$ ./a.out
Well done
Your grade is  C
*/
