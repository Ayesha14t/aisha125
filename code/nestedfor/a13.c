#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");
    
     int x=1;
 
     for(int i=1;i<=4;i++){ 

     
        for(int j=5;j>=i;j--){

           printf("%d ",x*x);
   
         x++;  
            
 
      }

      printf("\n");
      
   

  }

   
 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ cc a13.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ ./a.out
Design Pattern 
 
1 4 9 16 
25 36 49 
64 81 
100
  
*/

