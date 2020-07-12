#include<stdio.h>

void main(){

int a=5 , ans=0;

ans= ++a + ++a + ++a;

printf("%d\t %d\n",a , ans); 


}


/*aishatandekar@predatoraisha-VirtualBox:~/pc$ gedit op1.c
^C                                                                                    
aishatandekar@predatoraisha-VirtualBox:~/pc$ cc op1.c
aishatandekar@predatoraisha-VirtualBox:~/pc$ ./a.out
8	 22
aishatandekar@predatoraisha-VirtualBox:~/pc$ 
*/
