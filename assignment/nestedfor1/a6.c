#include<stdio.h>

void main(){


     for(int i=1;i<=5;i++){
     
        char ch='A';
 
           for(int j=1;j<=i;j++){

               
	              printf("%c ",ch);
                      ch++;
		}
           
             printf("\n");	 
              
 	}


    }
/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ cc a6.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ ./a.out
A 
A B 
A B C 
A B C D 
A B C D E 
*/
