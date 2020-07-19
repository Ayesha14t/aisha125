#include<stdio.h>

void main(){

  int num;

   printf("Enter the Number\n");
   scanf("%d",&num);
  
  for(int i=num;i>0;i--){

      printf("%d\t",i);
  
     
    }
     printf("\n");

    for(int i=num;i>0;i--)
   
      if(i%2!=0)
        
         printf("%d\t ",i);

 printf("\n");
 
  } 

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a8.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
Enter the Number
6
6	5	4	3	2	1	
5	 3	 1	*/
