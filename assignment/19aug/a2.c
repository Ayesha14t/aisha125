#include<stdio.h>

void main(){

 int ch;

 printf("Enter the day No from week starting from 0 to 6 \n");
 scanf("%d",&ch);

 switch(ch){

  
      case 0: printf("Monday\n");
              break;

      case 1: printf("Tuesdday\n");
              break;


      case 2: printf("Wednesday\n");
              break;


      case 3: printf("Thursday\n");
              break;


      case 4: printf("Friday\n");
              break;

  
      case 5: printf("Saturday\n");
              break;


      case 6: printf("sunday\n");
              break;
 }      


 }
