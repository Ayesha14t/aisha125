#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1,x=1;
 
     while(i<=4){
         
       int j=1;
 
        while(j<=i){

              
            if( j<i)
                
               printf("%d ",x);

   	     else
                printf("* "); 

          x++; 

          j++;

    	   }
      
       printf("\n");
 
   	 i++;
 
       }
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a9.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
* 
2 * 
4 5 * 
7 8 9 * 
*/
