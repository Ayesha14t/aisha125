#include<stdio.h>

void main(){

int a=4,b=7,ans=0;

ans=a^b;      // 128    64   32   16      8421
             //    0     0    0    0      0100
            //     0     0    0    0      0111
           //      0     0    0    0      0011
          
 
printf("%d",ans);

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc p6.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
3
*/
