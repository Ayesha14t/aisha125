#include<stdio.h>

void main(){

int a;

float a=10.6; 

printf();    //cannot write 


}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/6july$ cc a7.c
a7.c: In function ‘main’:
a7.c:7:7: error: conflicting types for ‘a’
 float a=10.6;
       ^
a7.c:5:5: note: previous declaration of ‘a’ was here
 int a;
     ^
a7.c:9:1: error: too few arguments to function ‘printf’
 printf();
 ^~~~~~
In file included from a7.c:1:0:
/usr/include/stdio.h:318:12: note: declared here
 extern int printf (const char *__restrict __format, ...);
*/
