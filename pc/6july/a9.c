#include<stdio.h>

void main(){

printf(printf("hello"));

}


/*aishatandekar@predatoraisha-VirtualBox:~/pc/6july$ cc a9.c
a9.c: In function ‘main’:
a9.c:5:8: warning: passing argument 1 of ‘printf’ makes pointer from integer without a cast [-Wint-conversion]
 printf(printf("hello"));
        ^~~~~~
In file included from a9.c:1:0:
/usr/include/stdio.h:318:12: note: expected ‘const char * restrict’ but argument is of type ‘int’
 extern int printf (const char *__restrict __format, ...);
            ^~~~~~
a9.c:5:1: warning: format not a string literal and no format arguments [-Wformat-security]
 printf(printf("hello"));

aishatandekar@predatoraisha-VirtualBox:~/pc/6july$ ./a.out
Segmentation fault (core dumped)

*/
