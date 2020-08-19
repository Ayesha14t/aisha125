#include<stdio.h>

void main(){

 int a,b,c,ans;

 printf("Enter the 3 Angles of Triangle \n");
 scanf("%d%d%d",&a,&b,&c);

 ans=a+b+c;

 ans==180? printf("It is a valid Triangle\n") : printf("It is not a valid Triangle \n ") ;



}

/*

aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/19aug$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/19aug$ ./a.out
Enter the 3 Angles of Triangle 
30
60
70
It is not a valid Triangle

*/
