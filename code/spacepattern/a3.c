#include<stdio.h>

void main(){

  for(int i=1; i<=4;i++){

      for(int s=1;s<i;s++){
 
        printf(" ");

 	}

     for(int j=5;j>=i*2-1;j--){
   
         printf("*");

	}
    printf("\n");

     }
 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/spacepattern$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/spacepattern$ ./a.out
*****
 ***
  *
*/
