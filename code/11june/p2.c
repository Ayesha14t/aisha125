#include<stdio.h>

void main(){

int a=30,ans=0;

ans=a>>4;    // 128    64   32   16      8421
            //    0     0    0    1      1110
            //    0     0    0    0      0001
          
 
printf("%d",ans);

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc p2.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
1*/
