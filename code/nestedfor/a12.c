#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");
    
    // int x=1;
 
     for(int i=1;i<=4;i++){ 

     
        for(int j=4;j>=i;j--){

           printf("%d ",j*j);
   
         // x++;  
            
 
      }

      printf("\n");
      
   

  }

   
 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ cc a12.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ ./a.out
Design Pattern 
 
16 9 4 1 
16 9 4 
16 9 
16 
*/
