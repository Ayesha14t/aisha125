#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1,x=1;
 
     while(i<=4){
         
       int j=1;
 
        while(j<=i){

            if( j<i)
                
               printf(" ");

   	    else
                printf("%d ",x);   

       
          x++; 

          j++;

    	   }
      
       printf("\n");
 
   	 i++;
 
       }
 }
/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a7.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
1 
 3 
  6 
   10 */


