#include<stdio.h>

 void main(){

   int a[];
  

   for(int i=0;i<5;i++){
	
   
    printf("%d\t",a[i]);


	 }
  printf("\n");

 }
/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/practicecode/array$ cc a2.c
a2.c: In function ‘main’:
a2.c:5:8: error: array size missing in ‘a’
    int a[];
        ^
*/
