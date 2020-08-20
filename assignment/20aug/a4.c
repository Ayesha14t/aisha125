#include<stdio.h>

 void main(){

 int x=1,r;
  
   printf("Enter the  row \n");
   scanf("%d",&r);

  for(int i=1;i<=r;i++){

       for(int j=1;j<=r;j++){
        
           printf("%d ",x);
            x++;
           }
      printf("\n");
     }
 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ ./a.out
Enter the  row 
4
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16 

*/
