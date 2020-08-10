#include<stdio.h>

void main(){

int a=10,b=15,ans=0;

ans=a&b;                 //8 4 2 1
                        //1 0 1  0  AND OPERATION   
                       //1  1 1  1 

                  //ans=1 0 1 0
printf("%d\n",ans);



}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc bitwise1.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
10
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ */
