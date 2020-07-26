#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1;
   int x=1;
 
     while(i<=4){
         
       int j=5;
 
        while(j>=1){

           printf("%d ",j*j);

        x++; 

          j--;

    	   }
      
       printf("\n");
 
   	 i++;
 
       }
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a14.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
25 16 9 4 1 
25 16 9 4 1 
25 16 9 4 1 
25 16 9 4 1 
*/
