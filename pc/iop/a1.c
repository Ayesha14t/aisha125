#include<stdio.h>

  void main(){

     float r;

    printf("Enter the Radius\n");

    scanf("%f",&r);
      
    float a=3.14*(r*r);  //area
    float c=2*3.14*r;   //circumfernce
    
    printf("The Area of given Radius %f is :- %f\n",r,a);
    printf("The Circumference of Radius %f is :- %f\n",r,c);

   
} 

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ ./a.out
Enter the Radius
4
The Area of given Radius 4.000000 is :- 50.240002
The Circumference of Radius 4.000000 is :- 25.120001
*/
