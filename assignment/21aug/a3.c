#include<stdio.h>

 void main(){

  char sex ,marital;
  int age;

 printf("Enter your Sex (m/f) \n");
 scanf(" %c",&sex);

   
 printf("Enter your Marital status (y/n) \n");
 scanf(" %c",&marital);


 switch(sex){

    case 'f': printf("you will work in urban area \n");
              break;


    case 'm': printf("Enter your age \n");
              scanf("%d",&age);

               if(age>=40 && age<=60){
 
                  printf("You will work in urban Area \n");
                  break;
                }

               else if(age>=20 && age<40){

                  
                  printf("You will work Anywhere \n");
                    break;

                } 
               else{

                    printf("Error\n");
                    break;
                }
        

       default :     printf("Error\n");       
 
   }

 }

/*

aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/21aug$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/21aug$ ./a.out
Enter your Sex (m/f) 
m
Enter your Marital status (y/n) 
n
Enter your age 
30
You will work Anywhere 
*/
