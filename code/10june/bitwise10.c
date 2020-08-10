#include<stdio.h>

void main(){

int a=20,b=10,c=10 , ans=0;

ans=~b&a;
                     
printf("%d\n",ans);

ans=~b|a;
                     
printf("%d\n",ans);

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc bitwise10.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
20
-11
*/
