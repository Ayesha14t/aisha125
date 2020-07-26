#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1;
   //int x=1;
 
     while(i<=4){
         
       int j=1;
 
        while(j<=4){

           printf("%d ",j*j);

       //   x++; 

          j++;

    	   }
      
       printf("\n");
 
   	 i++;
 
       }
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a11.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
1 4 9 16 
1 4 9 16 
1 4 9 16 
1 4 9 16 
*/
