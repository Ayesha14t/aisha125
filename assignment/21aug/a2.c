#include<stdio.h>

 void main(){

  int unit;
  int total ;

    printf("Enter the Electricity unit \n");
    scanf("%d",&unit);

    if(unit<=50)
 
               total=unit*0.50*10;

    if(unit<=100)
 
               total=unit*0.75*10;

    if(unit<=200)
 
               total=unit*1.20*10;

    if(unit>250)
 
               total=unit*1.50*10;


    printf("Total Rs accoring to unit %d are %d .\n",unit,total);
 }

/*
ishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/21aug$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/21aug$ ./a.out
Enter the Electricity unit 
75
Total Rs accoring to unit 75 are 900 .

*/
