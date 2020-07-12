#include<stdio.h>

void main(){

int ans=0;

ans=65&29;         //128 64 32  16 8421
                   //0    1 0  0  0001  AND OPERATION
                  //0     0 0  1  1101
                 
                  //ans=00000001


printf("%d\n",ans);
}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc ass3.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
1
*/

