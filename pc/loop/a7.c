#include<stdio.h>

 void main(){
   
 
   char lb,db;
   int i;
   


    printf("Please Enter the Lower Boundaries \n");
    scanf("%c",&lb);

    printf("Please Enter the Upper Boundaries \n");
    scanf(" %c",&db);
   
    for(int i=lb;i<=db;i++){

		if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
          
                   printf("%c is vowel\n",i);
        
        }
     printf("%c is constant\n",i);
 

  }
/*ishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a7.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
Please Enter the Lower Boundaries 
C
Please Enter the Upper Boundaries 
F
E is vowel
� is constant
*/


