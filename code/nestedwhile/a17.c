#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");

    int i=1;
    int x=1;
    char ch='A';
 
     while(i<=4){

      
       int j=5;
 
        while(j>=i){      

            if(j==2||j==4)
                 
                printf("%d ",x);

           printf("%c ",ch);


           x++;
       
          ch++; 

          j--;

    	   }
      
       printf("\n");
 
   	 i++;
 
       }
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ cc a17.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedwhile$ ./a.out
Design Pattern 
 
A 2 B C 4 D E 
F 7 G H 9 I 
J 11 K L 
M 14 N 
*/
