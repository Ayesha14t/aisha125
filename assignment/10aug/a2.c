#include<stdio.h>

void main(){

int choice;
char ch;

 do {

  printf("\n***WELCOME TO PHEONIX MALL***\n1.Shopping\n2.KFC\n3.Movie\n4.DOMINOS PIZZA\n");
  printf("Enter choice \n");
  scanf("%d",&choice);
  
  switch(choice){

   case 1:   printf("Went shopping \n");


   case 2:   printf("Went kfc \n");


   case 3:   printf("Went Movie \n");


   case 4:  printf("Went Dominos Pizza\n");



	 }

     printf("Do you want to continue (y/n)\n");
     scanf(" %c",&ch);
    }while(ch=='Y'||ch=='y');

 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/10aug$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/10aug$ ./a.out

***WELCOME TO PHEONIX MALL***
1.Shopping
2.KFC
3.Movie
4.DOMINOS PIZZA
Enter choice 
1
Went shopping 
Went kfc 
Went Movie 
Went Dominos Pizza
Do you want to continue (y/n)
y

***WELCOME TO PHEONIX MALL***
1.Shopping
2.KFC
3.Movie
4.DOMINOS PIZZA
Enter choice 
2
Went kfc 
Went Movie 
Went Dominos Pizza
Do you want to continue (y/n)
y

***WELCOME TO PHEONIX MALL***
1.Shopping
2.KFC
3.Movie
4.DOMINOS PIZZA
Enter choice 
3
Went Movie 
Went Dominos Pizza
Do you want to continue (y/n)
y

***WELCOME TO PHEONIX MALL***
1.Shopping
2.KFC
3.Movie
4.DOMINOS PIZZA
Enter choice 
4
Went Dominos Pizza
Do you want to continue (y/n)
n
*/
