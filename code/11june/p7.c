#include<stdio.h>

void main(){

int a=7,b=7,ans=0;

ans=a^b;      // 128    64   32   16      8421
             //    0     0    0    0      0111
            //     0     0    0    0      0111
           //      0     0    0    0      0000
          
 
printf("%d",ans);

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc p7.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
0
*/
