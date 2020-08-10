#include<stdio.h>


void main(){


 int num;
char choice;

do{

  
  printf("Enter the Number \n");
  scanf("%d",&num);
 
  int var=num;
  int rem=0;
  int rev=0;
    
  while(num!=0){

       rem=num%10;
       rev=rev*10+rem;
       num=num/10;

  
    }
     
     printf(" Reverse of %d is %d",var,rev);
 
    printf("\n Do you want to continue y/n \n");
    scanf( " %c",&choice);

   }while(choice=='y');

}
/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/10aug$ cc reverse.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/10aug$ ./a.out
Enter the Number 
123
 Reverse of 123 is 321
 Do you want to continue y/n 
n

*/
