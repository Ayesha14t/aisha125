#include<stdio.h>
#define L 10

void main(){



     auto money=10;
     
      switch(money,money*2){   
 
 
       

       case L:  printf("william\n");
                 break;

       case L*2: printf("warren\n");
                 break;
	
       case L*3: printf("carlos\n");
                 break;
	
      default:
               printf(" lawerence \n");

  
       case L*4: printf("inquar\n");
                 break;
     }
 
}

/*a5.c: In function ‘main’:
a5.c:8:11: warning: type defaults to ‘int’ in declaration of ‘money’ [-Wimplicit-int]
      auto money=10;
           ^~~~~
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/snippets/22july$ ./a.out
warren
*/

