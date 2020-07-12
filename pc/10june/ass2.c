#include<stdio.h>

void main(){

int ans=0;

ans=7|21;         //128 64 32  16 8421
                   //0    0 0  0  0111  OR OPERATION
                  //0     0 0  1  0101
                 
                  //ans=00010111


printf("%d\n",ans);
}


/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc ass2.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
23
*/
