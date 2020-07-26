#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1;
 
     while(i<=4){
         
       int j=1;
 
        while(j<=4){

         printf("* ");
    
      		j++;

    	   }
      
       printf("\n");
 
   	 i++;
 
       }
 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
* * * * 
* * * * 
* * * * 
* * * * */
