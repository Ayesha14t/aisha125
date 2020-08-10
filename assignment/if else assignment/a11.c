#include<stdio.h>

void main(){



int number1, number2;
 
printf("Enter two integers: ");

 scanf("%d %d", &number1, &number2);
if (number1 >= number2) {

if (number1 == number2) {
   printf(" %d = %d",number1,number2);
}
else {
  printf(" %d > %d", number1, number2);
}
}
else {
  printf(" %d < %d",number1, number2);
}


}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a11.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
Enter two integers: 10
2
 10 > 2 */
