
#include<stdio.h>

int main(){

    int a ;  
    
 	printf("Enter the no of month\n");
        scanf("%d",&a);

     switch(a){
    
   	 case 1:
   			 printf("January has 31 days\n");
			
   			 break;
   	 
   	 case 2:
   			 printf("Feburary has 28/29 days \n");
   			 break;
	 case 3:
   			 printf("March has 31 days\n");
   			 break;

	 case 4:
   			 printf("April has 30 days\n");
   			 break;
   			 
   	 case 5:
   			 printf("May has 31 days\n");
   			 break;

	 case 6:
   			 printf("June has 30 days\n");
			
   			 break;
   	 
   	 case 7:
   			 printf("July has 31 days \n");
   			 break;

	 case 8:
   			 printf("August has 31 days\n");
   			 break;

	 case 9:
   			 printf("september has 30 days\n");
   			 break;
   			 
   	 case 10:
   			 printf("October has 31 days \n");
   			 break;

		 
   	 case 11:
   			 printf("November has 30days \n");
   			 break;
			 
   	 case 12:
   			 printf("December has 31 days \n");
   			 break;
   			 
   	 default:
   	 
   			 printf("wrong choice\n");
   			 break;
    
    }
 	
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ cc a9.c
aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ ./a.out
Enter the no of month
2
Feburary has 28/29 days */
