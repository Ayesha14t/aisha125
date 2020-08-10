#include <stdio.h>


void main() {


      int a = 20;
     
      switch(~a) {


        case 20:

                printf("Case 20\n");
                printf("a= %d\n",a);
                break;
        case -20:

               printf("Case -20\n");
               printf("a= %d\n",a);
               break;
        case -21:

               printf("case -21\n");
               printf("a= %d\n",a);
               break;
        default:

              printf("Default\n");
              break;
}

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ ./a.out
case -21
a= 20
*/

