#include<stdio.h>

void main(){

   char ch;

 

     for(int i=1;i<=5;i++){
     
           char ch='A';
 
           for(int j=1;j<=5;j++){

     
               printf("%c ",ch);
                 ch++;
             
		}
           
             printf("\n");	 
              
 	}


    }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ ./a.out
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 
*/
