#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");
 
 
     for(int i=1;i<=4;i++){ 
 
          int x=1;
     
        for(int j=1;j<=i;j++){

   		   printf("%d ",x);   
             
          x++;  
 
      }

      printf("\n");

  }

   
 }


/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ cc a6.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ ./a.out
Design Pattern 
 
1 
1 2 
1 2 3 
1 2 3 4 
*/
