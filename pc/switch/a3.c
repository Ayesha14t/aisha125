#include<stdio.h>

int main(){

    float a = 5.2;
    
    switch((int)a){
    
   	 case 1:
   			 printf("one\n");
   			 break;
   	 
   	 case 5:
   			 printf("five\n");
   			 break;
   			 
   	 case 2:
   			 printf("two\n");
   			 break;
   			 
   	 default:
   	 
   			 printf("else\n");
   			 break;
    
    }

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ ./a.out
five*/
