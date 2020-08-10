#include<stdio.h>


void main(){

  int choice;
  int  ch1;
  char ch2;

do{
 
     printf(" Welcome to Burger King \n\n\n*****MENU*****\n1.Veg burger \n2.Non-Veg burger \n");
     scanf("%d",&choice);

  switch(choice){



      case 1:  
                 printf(" veg Blast\na.veggie Tikki burger\nb.Aloo Tikki Burger \nc.Mushroom veggie cheese burger\nd.Peanut Butter sweet potato Burger \n");
                       
			scanf("%d",&ch1);

                         switch(ch1){
                          
                          case 1: printf("You ordered Veggie Tikki Burger \n");
                                    break;
                          
                          case  2:printf("You ordered Aloo Tikki Burger \n");
           		           break;
                       
                          case  3 :printf("You ordered Mushroom veggie cheese Burger \n");
                                   break;

                          case  4:printf("You ordered Peanut Butter sweet potato Burger \n");
                                    break;
                }
                 
                break;
 
      case 2:     printf(" Non veg blast\na.non veggie Tikki burger\nb.chicken Tikki Burger\nc.Mushroom chicken veggie burger\nd.Tandoori chicken Burger\n");
		
                     scanf("%d",&ch1);

                         switch(ch1){
                          
                          case 1: printf("You ordered non veggie Tikki burger \n");
                          	    break;

                          case 2:printf("You ordered chicken Tikki Burger \n");
                                    break;

                          case 3:printf("You ordered Mushroom chicken veggie burger \n");
                        	    break;

                          case 4:printf("You ordered Tandoori chicken Burger \n");
				    break;
                }
 
                break;

     			
  }        
             printf("Do you wan to continue (y/n)");
            scanf(" %c",&ch2);


}while(ch2=='Y'||ch2=='y');
 
 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
 Welcome to Burger King 


*****MENU*****
1.Veg burger 
2.Non-Veg burger 
1
 veg Blast
a.veggie Tikki burger
b.Aloo Tikki Burger 
c.Mushroom veggie cheese burger
d.Peanut Butter sweet potato Burger 
1
You ordered Veggie Tikki Burger 
Do you wan to continue (y/n)y
 Welcome to Burger King 


*****MENU*****
1.Veg burger 
2.Non-Veg burger 
2
 Non veg blast
a.non veggie Tikki burger
b.chicken Tikki Burger
c.Mushroom chicken veggie burger
d.Tandoori chicken Burger
4
You ordered Tandoori chicken Burger 
Do you wan to continue (y/n)n
*/
