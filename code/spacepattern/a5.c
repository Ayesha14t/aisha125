#include<stdio.h>

void main(){

 for(int i=1;i<=4;i++){

     for(int sp=3 ;sp>=i;sp--){

         printf(" ");

      }

     for(int j=1;j<=i;j++){
             
               printf("*");
             }
       printf("\n");

        
   }

 for(int i=1;i<=3;i++){

     for(int sp=1;sp<=i;sp++){

         printf(" ");

      }

     for(int j=3;j>=i;j--){
             
               printf("*");
             }

       printf("\n");

        
   }
        
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/spacepattern$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/spacepattern$ ./a.out
   *
  **
 ***
****
 ***
  **
   *
*/
