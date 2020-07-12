#include<stdio.h>
int main(){

int a=300,b,c;
 if(a>=400)

b=300;
c=200;
printf("%d \t %d\n",b,c);  // b=garbage value c= 200   


return 0;
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/25june$ cc p3.c
aishatandekar@predatoraisha-VirtualBox:~/pc/25june$ ./a.out
32766 	 200
*/
