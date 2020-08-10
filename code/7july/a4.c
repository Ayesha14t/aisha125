#include<stdio.h>

void main(){

scanf(scanf("%d",10));
}


/*aishatandekar@predatoraisha-VirtualBox:~/pc/7july$ cc a4.c
a4.c: In function ‘main’:
a4.c:5:15: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘int’ [-Wformat=]
 scanf(scanf("%d",10));
              ~^
a4.c:5:7: warning: passing argument 1 of ‘scanf’ makes pointer from integer without a cast [-Wint-conversion]
 scanf(scanf("%d",10));
       ^~~~~
In file included from /usr/include/features.h:424:0,
                 from /usr/include/x86_64-linux-gnu/bits/libc-header-start.h:33,
                 from /usr/include/stdio.h:27,
                 from a4.c:1:
/usr/include/stdio.h:398:12: note: expected ‘const char * restrict’ but argument is of type ‘int’
 extern int __REDIRECT (scanf, (const char *__restrict __format, ...),
            ^
a4.c:5:1: warning: format not a string literal and no format arguments [-Wformat-security]
 scanf(scanf("%d",10));
aishatandekar@predatoraisha-VirtualBox:~/pc/7july$ ./a.out
5
Segmentation fault (core dumped)
*/
