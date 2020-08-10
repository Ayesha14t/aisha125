#include<stdio.h>

void main(){


     for(int i=5;i>1;i--){
     
       
 
           for(int j=5;j>1;j--){

                if(i==j)
 
                      printf("#");
 
		else  
	
	              printf("=");
                
		}
           
             printf("\n");	 
              
 	}

}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ cc a8.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ ./a.out
#===
=#==
==#=
===#

*/
