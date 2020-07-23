#include<stdio.h>
#define L 10

void main(){



     int const=10;
     
      switch(5/4/3){   
 
 
       

       case x:  printf("clinton\n");
                 break;

       case x+1: printf("gandhi\n");
                 break;
	
       case x+2: printf("gates\n");
                 break;
	
      default:
               printf(" brown \n");

  
     }
 
}


/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/snippets/22july$ cc a6.c
a6.c: In function ‘main’:
a6.c:8:15: error: expected identifier or ‘(’ before ‘=’ token
      int const=10;
               ^
a6.c:15:13: error: ‘x’ undeclared (first use in this function)
        case x:  printf("clinton\n");
             ^
a6.c:15:13: note: each undeclared identifier is reported only once for each function it appears in
*/
