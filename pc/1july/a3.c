
#include<stdio.h>


void main(){
 
       
     int ch;

 
   printf("Enter todays day no according to week\n");
   scanf("%d",&ch);


  switch (ch) {
  	
	case 0:
   		 printf( "Sunday");
   		 break;
        case 1:
  		 printf("Monday");
   		 break;
        case 2:
     		 printf("Tuesday");
   		 break;
        case 3:
    		 printf("Wednesday");
   		 break;
        case 4:
                 printf("Thursday");
   		 break;
        case 5:
  		  printf("friday");
   		 break;
        case 6:
   		 printf("Saturday");
	}

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/1july$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/pc/1july$ ./a.out
Enter todays day no according to week
3
Wednesday*/


