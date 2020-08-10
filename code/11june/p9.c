#include<stdio.h>

void main(){

int a=40,b=32,ans=0;

ans=a^b;      // 128    64   32   16      8421
             //    0     0    1    0      1000
            //     0     0    1    0      0000
           //      0     0    0    0      1000
          
 
printf("%d",ans);

}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc p9.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
8*/
