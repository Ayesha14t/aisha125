#include<stdio.h>

void main(){

  for(int i=1; i<=4;i++){

    
     for(int j=4;j>=i;j--){
   
         printf("*");

	}
    printf("\n");

     }
 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/spacepattern$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/spacepattern$ ./a.out
****
***
**
*

*/
