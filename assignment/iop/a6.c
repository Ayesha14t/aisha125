 #include<stdio.h>

void main(){


 float f1,f2;
 float a,s,m,d;
 

 printf("Enter the  float no \n");

    scanf("%f",&f1);


 printf("Enter the float no \n");

    scanf("%f",&f2);
 

  printf("Entered the float is %.2f & %.2f\n",f1,f2);

  a=f1+f2;
  s=f1-f2;
  m=f1*f2;
  d=f1/f2;

   printf("Addition %.2f\n",a);
  printf("Multiplication %.2f\n",m);
  printf("Subtraction %.2f\n",s);
  printf( "Division %.2f\n",d);

     
 } 

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ cc a6.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ ./a.out
Enter the  float no 
12.745
Enter the float no 
10.2229
Entered the float is 12.74 & 10.22
Addition 22.97
Multiplication 130.29
Subtraction 2.52
Division 1.25
*/
