#include<stdio.h>


void main(){

int a=10;

printf("%d",-(~a && a)||0);

} 

/*aishatandekar@predatoraisha-VirtualBox:~/pc/24june$ cc p8.c
aishatandekar@predatoraisha-VirtualBox:~/pc/24june$ ./a.out
1 
*/
