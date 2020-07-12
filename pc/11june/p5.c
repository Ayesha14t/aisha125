#include<stdio.h>

void main(){

int a=63,ans=0;

ans=a>>3;    // 128    64   32   16      8421
             //    0     0    1    1     1111
            //     0     0    0    0     0111
          
 
printf("%d",ans);

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc p5.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
7*/
