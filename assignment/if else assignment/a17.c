#include<stdio.h>

void main(){

 
  int num1,num2,num3;
  int larg;
printf("Enter the number1 \n");

scanf("%d",&num1);

printf("Enter the number2 \n");

scanf("%d",&num2);

printf("Enter the number2 \n");

scanf("%d",&num3);

if(num1>num2&&num1>num3){

   printf("The largest no is %d\n",num1);
  larg=num1;

  }
else if(num2>num1&&num2>num3){

   printf("The largest no is %d\n",num2);
     larg=num2;
     
  }
 else {

  printf("The Largest no is %d\n",num3);
    larg=num3;  
      
}
 
        if(larg%2==0){
  
            printf("%d is even no \n",larg);
       }
      else{
                printf("%d is odd no \n",larg);
            }   
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a17.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
Enter the number1 
12
Enter the number2 
8
Enter the number2 
14
The Largest no is 14
14 is even no*/
