#include<stdio.h>


void main(){


 int num1,num2;
char choice;

  
  printf("Enter the starting and Ending point \n");
  scanf("%d%d",&num1,&num2);

 for(int i=num1;i<num2;i++){
 
  int var=i;
  int rem=0;
  int rev=0;
    
  while(i!=0){

       rem=i%10;
       rev=rev*10+rem;
       i=i/10;

  
    }
    if(var==rev)
 
     printf("%d\n",rem);
 
    printf("\n Do you want to continue y/n\n");
    scanf( " %c",&choice);

   }

}

