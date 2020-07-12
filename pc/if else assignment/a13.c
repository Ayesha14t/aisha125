#include<stdio.h>

void main(){

float n1=10.5, n2=2.5, n3=25.4;
if(n1 >= n2 && n1 >= n3){
printf("Largest number: %f",n1);
}
if(n2 >= n1 && n2 >= n3){
printf("Largest number: %f",n2);
}
if(n3 >= n1 && n3 >= n2) {
printf("Largest number: %f",n3);


}

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a13.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
Largest number: 25.400000*/
