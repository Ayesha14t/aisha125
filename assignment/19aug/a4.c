#include<stdio.h>

void main(){


 int r;

  printf("Enter the Row \n");
  scanf("%d",&r);

  for(int i=0;i<r;i++){
   int ch=1;

       for(int j=0;j<r;j++){

             printf("%d ",ch);
             ch++;

           } 
   printf("\n");
      }
 }

/*

aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/19aug$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/19aug$ ./a.out
Enter the Row 
4
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 

*/
