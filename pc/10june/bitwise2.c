#include<stdio.h>

void main(){

int a=10,b=15,ans=0;

ans=a|b;                 //8 4 2 1
                        //1 0 1  0  OR OPERATION   
                       //1  1 1  1 

                  //ans=1 1 1 1
printf("%d\n",ans);


}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ cc bitwise2.c
aishatandekar@predatoraisha-VirtualBox:~/pc/11june$ ./a.out
15
*/
