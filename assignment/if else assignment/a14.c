#include<stdio.h>

void main(){

int num;

printf("Enter The Number\n");
scanf("%d",&num);

if((num>25)&&(num<50)){
      printf("The Entered Number %d is between 25 to 50\n",num);
  }

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a14.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
Enter The Number
27
The Entered Number 27 is between 25 to 50
*/
