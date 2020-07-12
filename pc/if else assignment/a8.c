#include<stdio.h>

void main(){

int year=2020;
if(((year %4==0)&&(year %100!=0))||(year%400==0)){


    printf(" Year is a leap year\n");


}
}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a8.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
 Year is a leap year
*/
