#include<stdio.h>

void main(){

  for(int i=1; i<=4;i++){

      for(int s=3;s>=i;s--){
 
        printf(" ");

 	}

     for(int j=1;j<=i*2-1;j++){
   
         printf("*");

	}
    printf("\n");

     }

}

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/spacepattern$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/spacepattern$ ./a.out
   *
  ***
 *****
*******

*/
