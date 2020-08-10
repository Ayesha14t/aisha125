#include<stdio.h>

void main(){


int x=5, y=6;

x+=y;
printf("%d\t%d\n",x,y);
x-=y;
printf("%d\t%d\n",x,y);
x*=y;
printf("%d\t%d\n",x,y);
x/=y;
printf("%d\t%d\n",x,y);
 
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc$ cc op5.c
aishatandekar@predatoraisha-VirtualBox:~/pc$ ./a.out
11	6
5	6
30	6
5	6
aishatandekar@predatoraisha-VirtualBox:~/pc$  */s
