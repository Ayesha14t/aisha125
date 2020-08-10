#include<stdio.h>

int main(){

    int a ;  
    
 	printf("Enter the no of your choice upto 5\n");
        scanf("%d",&a);

     switch(a){
    
   	 case 1:
   			 printf("one\n");
			
   			 break;
   	 
   	 case 2:
   			 printf("two\n");
   			 break;
	 case 3:
   			 printf("three\n");
   			 break;

	 case 4:
   			 printf("four\n");
   			 break;
   			 
   	 case 5:
   			 printf("five\n");
   			 break;
   			 
   	 default:
   	 
   			 printf("else\n");
   			 break;
    
    }
 	if(a>=5){

		printf("%d is greater than or equal to  5\n",a);
	}
	else{
	
		printf("%d is less than 5\n",a);
	
 	}
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ cc a8.c
aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ ./a.out
Enter the no of your choice upto 5
5
five
5 is greater than or equal to  5
*/
