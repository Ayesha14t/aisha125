#include<stdio.h>

void main(){

 int p,c,m,b,comp;
int per;

 printf("Enter the Subjects according to order 1.pyhsics 2. chemistry 3. mathematics 4. Biology 5. Computer \n ");
 scanf("%d%d%d%d%d",&p,&c,&m,&b,&comp);
 
  per=(p+c+m+b+comp)/5;

   if(per>=90)

       printf("Grade A \n");

    else if(per>=80)

       printf("Grade B \n");

    else if(per>=70)

       printf("Grade C \n");
 
    else if(per>=60)
  
       printf("Grade D \n");
     
     else if(per>=50)

       printf("Grade E \n");

     else if(per<=40)

       printf("Grade F \n");
 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ ./a.out
Enter the Subjects according to order 1.pyhsics 2. chemistry 3. mathematics 4. Biology 5. Computer 
 85
80
89
93
95
Grade B 


*/
