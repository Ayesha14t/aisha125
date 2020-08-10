#include<stdio.h>

void main(){

int a=10;

int a=20;
printf("%d\n",a);

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/6july$ cc a2.c
a2.c: In function ‘main’:
a2.c:7:5: error: redefinition of ‘a’
 int a=20;
     ^
a2.c:5:5: note: previous definition of ‘a’ was here
 int a=10;
     ^
*/
