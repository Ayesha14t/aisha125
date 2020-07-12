#include<stdio.h>

void main(){

int a=25,ans=0;

ans=a>>3;    // 128    64   32   16      8421
             //    0     0    0    1     1001
            //     0     0    0    0     0011
          
 
printf("%d",ans);

}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc p4.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
3*/
