#include<stdio.h>


  void main(){


   int sum=0;  //divisor
   int n;

 
    printf("Please Enter the number \n");
    scanf("%d",&n);
 
   for(int i=1;i<n;i++){

   if(6%i==0){
    
    sum=sum+i;
      
        }

   }
    printf("%d is a perfect no \n",sum);

 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
Please Enter the number 
6
6 is a perfect no */
