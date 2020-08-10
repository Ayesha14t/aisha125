#include<stdio.h>

void main(){

int ans=0;

ans=15&19;         //128 64 32  16 8421
                   //0    0 0  0  1111  AND OPERATION
                  //0     0 0  1  0011
                 
                  //ans=00000011


printf("%d\n",ans);
}


/*
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc Ass1.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
3
*/
