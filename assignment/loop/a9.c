#include<stdio.h>

void main(){

  int count;

   printf("No of days to complete the assignment :- \n");
   scanf("%d",&count);
  
  for(int i=count;i>=0;i--){
      
      if(i>0)
    
   	  printf("%d days are remaining \n",i);
    
  
      else 
    	
 		printf("%d days Assignment is overdue\n",i);

  
    }
     printf("\n");

   
 
  } 

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a9.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
No of days to complete the assignment :- 
7
7 days are remaining 
6 days are remaining 
5 days are remaining 
4 days are remaining 
3 days are remaining 
2 days are remaining 
1 days are remaining 
0 days Assignment is overdue
*/
