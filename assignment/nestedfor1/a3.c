#include<stdio.h>

void main(){


    int x,fact=1;

     printf("Enter the no \n");
     scanf("%d",&x);

 
     for(int i=1;i<=5;i++){
     
            
         fact=fact*i;
       
             printf("%d ",fact);
         	 
              
 	}


    }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ ./a.out
Enter the no 
1
1 2 6 24 120 
*/
