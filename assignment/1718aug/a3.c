#include<stdio.h>

 void main(){

 int r;

   printf("Enter the Row \n");
   scanf("%d",&r);
   for(int i=0;i<r;i++){

       for(int j=0;j<r;j++){


             printf("*");

               }
         printf("\n");
	 } 
}

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter the Row 
4
****
****
****
****

*/
