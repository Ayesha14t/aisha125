#include <stdio.h>

int main(){

        int a;

        switch(a = (sizeof(int) > -1)){

                case 1: printf("True\n");
                             break;

                case 0: printf("False\n");
                             break;
        }
        return 0;
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ ./a.out
False
*/
