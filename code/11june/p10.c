#include<stdio.h>

void main(){

int a=4,b=1,ans=0;

ans=a^b;      // 128    64   32   16      8421
             //    0     0    0    0      0100
            //     0     0    0    0      0001
           //      0     0    0    0      0101
          
 
printf("%d",ans);

}

/*
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc p10.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
5

*/
