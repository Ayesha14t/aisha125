#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");
    
    int x=1;
 
     for(int i=1;i<=4;i++){ 

     
        for(int j=1;j<=i;j++){

             if( j<i)
                
               printf("%d ",x);

   	     else
                printf("* ");   
       
          x++;  
            
 
      }

      printf("\n");
      
   

  }

   
 }
/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ cc a9.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ ./a.out
Design Pattern 
 
* 
2 * 
4 5 * 
7 8 9 * 
*/
