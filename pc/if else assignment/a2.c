#include<stdio.h>

void main(){


int a=10,b=20;

if((a&&b++) && (a++||b++)){

printf("a:%d\n",a); //11
printf("b%d\n",b);  //b=21

}
printf("out of if\n");

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
a:11
b21
out of if

*/
