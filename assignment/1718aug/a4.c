#include<stdio.h>


 void main(){

  int a,ans;

  printf("Enter Any Number \n");
  scanf("%d",&a);

   if(a>0)

       printf("Entered no is positive \n"); 
 
   else if(a<0)

        printf("Entered mo is Negative\n");
   else
        printf("Entereed no is zero \n");
 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter Any Number 
13
Entered no is positive 
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter Any Number 
-5
Entered mo is Negative
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter Any Number 
0
Entereed no is zero 

*/
