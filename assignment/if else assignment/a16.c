#include<stdio.h>

void main(){


char c;

printf(" please enter the value\n");

scanf("%c",&c);

if(c>64&&c<96){


	printf("%c is in upper case\n",c);

}
else if(c>=97&&c<=122)
   {
printf("%c is in lower case\n",c);
   }
 else{

   printf("%c is a special symbol\n",c);

   }
}

/*

aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a16.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
 please enter the value
w
w is in lower case

*/
