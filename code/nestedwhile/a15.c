#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1;
   //int x=1;
     char ch='A';
 
     while(i<=4){
         
       int j=5;
 
        while(j>=i){

           printf("%c ",ch);

       // x++;
       
          ch++; 

          j--;

    	   }
      
       printf("\n");
 
   	 i++;
 
       }
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a15.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
A B C D E 
F G H I 
J K L 
M N 
*/
