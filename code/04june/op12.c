#include<stdio.h>


void main(){

int x=1,y=0,ans=0;
ans= (++x || y++)&& ++ans; //t
printf("%d\n",ans);


}

/*aishatandekar@predatoraisha-VirtualBox:~/pc$ cc op12.c
aishatandekar@predatoraisha-VirtualBox:~/pc$ ./a.out
1
aishatandekar@predatoraisha-VirtualBox:~/pc$ */
