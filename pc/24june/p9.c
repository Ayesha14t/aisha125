#include<stdio.h>


void main(){

int a=10;

printf("%d",-(~a & a)&11);

} 

/*aishatandekar@predatoraisha-VirtualBox:~/pc/24june$ cc p9.c
aishatandekar@predatoraisha-VirtualBox:~/pc/24june$ ./a.out
0*/
