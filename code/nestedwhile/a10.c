#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1,x=1;
 
     while(i<=4){
         
       int j=1;
 
        while(j<=4){

              
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

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a10.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
1 2 3 4 
 6 7 8 
  11 12 
   16 
*/
