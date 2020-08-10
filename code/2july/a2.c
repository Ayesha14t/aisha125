#include<stdio.h>

void main()
{
 float choice = 10.1 ;

 switch(choice)
  {
  case 10.1 :

          	  printf("\nCase 10.1");
          	  break;
  case 10.2 :

           	 printf("nCase 10.2");
           	 break;
  case 10.3 :

           	 printf("nCase 10.3");
            	break;
  }
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/2july$ cc a2.c
a2.c: In function ‘main’:
a2.c:7:9: error: switch quantity not an integer
  switch(choice)
         ^~~~~~
a2.c:9:3: error: case label does not reduce to an integer constant
   case 10.1 :
   ^~~~
a2.c:13:3: error: case label does not reduce to an integer constant
   case 10.2 :
   ^~~~
a2.c:17:3: error: case label does not reduce to an integer constant
   case 10.3 :
   ^~~~
*/
