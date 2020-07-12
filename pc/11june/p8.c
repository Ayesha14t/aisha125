#include<stdio.h>

void main(){

int a=40,b=7,ans=0;

ans=a^b;      // 128    64   32   16      8421
             //    0     0    1    0      1000
            //     0     0    0    0      0111
           //      0     0    1    0      1111
          
 
printf("%d",ans);

}
/*

aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc p8.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
47

*/
