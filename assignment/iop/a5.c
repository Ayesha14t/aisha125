  #include<stdio.h>

void main(){


 int num1,num;
 int av=0; 
  
 printf("How many number do you want to enter \n ");
 scanf("%d",&num);

   for(int i =0;i<num;i++){
       
   printf("Enter the number \n");

   scanf("%d",&num1); 
 
     }

 
  for(int i=0;i<num;i++){
      
     //average
 
   av=av+num1;
   av=av/num;
 
}
          

    printf("The average of numbers is %d\n",av);

 } 


/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ ./a.out
How many number do you want to enter 
 2
Enter the number 
10
Enter the number 
20
The average of numbers is 15
*/
