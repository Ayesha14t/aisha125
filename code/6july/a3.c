#include<stdio.h>

void main(){

int a=10;

   printf("%d\n",a);

int a=20;

   printf("%d\n",a);



}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/6july$ cc a3.c
a3.c: In function ‘main’:
a3.c:9:5: error: redefinition of ‘a’
 int a=20;
     ^
a3.c:5:5: note: previous definition of ‘a’ was here
 int a=10;
     ^

*/
