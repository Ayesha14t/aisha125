#include<stdio.h>


 void main(){

   int r;

     printf("Enter the no row \n");
     scanf("%d",&r);

     for(int i=1;i<=r;i++){
   
      int x=1;

       for(int j=1;j<=8;j++){


            if(x%2==0)
         
               printf("%d ",x);
               x++;

       }
   
       printf("\n");
    }
 }


/*

aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/21aug$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/21aug$ ./a.out
Enter the no row 
4
2 4 6 8 
2 4 6 8 
2 4 6 8 
2 4 6 8

*/
