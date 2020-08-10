#include<stdio.h>

void main(){


     for(int i=6;i>=1;i--){
     
       
 
           for(int j=6;j>=1;j--){

                if(j>=i)
 
                      printf(" ");
 
		else  
	
	              printf("*");
                
		}
           
             printf("\n");	 
              
 	}

}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ cc a7.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ ./a.out
 *****
  ****
   ***
    **
     *
*/
