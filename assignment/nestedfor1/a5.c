#include<stdio.h>

void main(){


     for(int i=1;i<=3;i++){
     
       
 
           for(int j=1;j<=5;j++){

                if(j==2||j==4)
 
                      printf("-");
 
		else  
	
	              printf("*");
                
		}
           
             printf("\n");	 
              
 	}


    }
/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ ./a.out
*-*-*
*-*-*
*-*-*

*/
