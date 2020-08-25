#include<stdio.h>

 void main(){

 int r;

 printf("Enter the row \n");
 scanf("%d",&r);
 
 for(int i=0;i<r;i++){
 
   for(int j=0;j<r;j++){

    if(i==0 || i==r-2) 
 
        printf("0 "); 

    else 

        printf("1 ");
       }
      
      printf("\n");
   }

   
 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/25aug$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/25aug$ ./a.out
Enter the row 
4
0 0 0 0 
1 1 1 1 
0 0 0 0 
1 1 1 1 

*/
