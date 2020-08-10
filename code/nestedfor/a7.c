#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");
    
    int x=1;
 
     for(int i=1;i<=4;i++){ 

     
        for(int j=1;j<=i;j++){

             if( j<i)
                
               printf(" ");

   	     else
                printf("%d ",x);   
       
          x++;  
            
 
      }

      printf("\n");
      
   

  }

   
 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ cc a7.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ ./a.out
Design Pattern 
 
1 
 3 
  6 
   10 
*/

