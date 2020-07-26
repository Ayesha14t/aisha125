#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1;
   int x=1;
 
     while(i<=4){
         
       int j=5;
 
        while(j>=1){

           printf("%d ",x*x);

        x++; 

          j--;

    	   }
      
       printf("\n");
 
   	 i++;
 
       }
}
/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a13.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
1 4 9 16 25 
36 49 64 81 100 
121 144 169 196 225 
256 289 324 361 400 */
