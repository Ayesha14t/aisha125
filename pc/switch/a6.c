#include <stdio.h>

void main() {

      int x = 10;
      int y = 20;
      
      switch(x) {

        case x:             //inverted commom needed while wri`ting variable name 

                printf("Case 10\n");
                printf("x= %d\n",x);
                break;
        case y:

               printf("Case 20\n");
               printf("y= %d\n",y);
               break;

        default:

              printf("Default\n");
              break;


      }
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ cc a6.c
a6.c: In function ‘main’:
a6.c:10:9: error: case label does not reduce to an integer constant
         case x:
         ^~~~
a6.c:15:9: error: case label does not reduce to an integer constant
         case y:
         ^~~~
*/
