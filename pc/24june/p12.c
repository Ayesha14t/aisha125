#include<stdio.h>

void main(){

int a=10;

printf("%d",(~a&&a)&&(a&&~a));

}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/24june$ cc p12.c
aishatandekar@predatoraisha-VirtualBox:~/pc/24june$ ./a.out
1 
*/
