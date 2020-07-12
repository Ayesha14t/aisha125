#include<stdio.h>

void main(){

int a;

float a=10.6; 

printf("%f\n",a);


}

/*
aishatandekar@predatoraisha-VirtualBox:~/pc/6july$ cc a6.c
a6.c: In function ‘main’:
a6.c:7:7: error: conflicting types for ‘a’
 float a=10.6;
       ^
a6.c:5:5: note: previous declaration of ‘a’ was here
 int a;
     ^
*/
