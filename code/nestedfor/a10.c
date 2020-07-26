#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");
    
    int x=1;
 
     for(int i=1;i<=4;i++){ 

     
        for(int j=1;j<=4;j++){

             if( j<i)
                
               printf(" ");

   	     else
                printf("%d ",x);   
       
          x++;  
            
 
      }

      printf("\n");
      
   

  }

   
 }
/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ cc a10.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ ./a.out
Design Pattern 
 
1 2 3 4 
 6 7 8 
  11 12 
   16 

*/
