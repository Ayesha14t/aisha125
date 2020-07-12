#include <stdio.h>
    int main() {

        int num = 0;
        switch (num) {

            case 0:
                printf("Value is 7");
                break;

            case 0:
                printf("Value is 8");
                break;

           
        }
        return 0;
   }

/*aishatandekar@predatoraisha-VirtualBox:~/pc/1july$ cc a10.c
a10.c: In function ‘main’:
a10.c:11:13: error: duplicate case value
             case 0:
             ^~~~
a10.c:7:13: note: previously used here
             case 0:
             ^~~~
*/
