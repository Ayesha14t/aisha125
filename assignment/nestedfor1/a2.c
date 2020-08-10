#include<stdio.h>

void main(){


    int x;

     printf("Enter the no \n");
     scanf("%d",&x);

 
     for(int i=1;i<=3;i++){
     
        
            for(int j=1;j<=3;j++){

     
               printf("%d ",x);
                 x++;
             
		}
           
             printf("\n");	 
              
 	}


    }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$  cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/nestedfor1$ ./a.out
Enter the no 
1
1 2 3 
4 5 6 
7 8 9 

*/
