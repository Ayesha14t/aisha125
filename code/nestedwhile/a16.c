#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1;
   //int x=1;
    
 
     while(i<=4){

       char ch='A';
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

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a16.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
A B C D E 
A B C D 
A B C 
A B 
*/

