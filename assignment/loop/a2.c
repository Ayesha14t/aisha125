#include<stdio.h>

 void main(){

  int n;
  int d; //digit
  
   printf("Please Enter the Number \n");
   scanf("%d",&n);
  
   for(int i=1;i<=n;i++){
   
  	 d=i%10;
   
    }
     printf("Total Digit Entered are %d\n",d);
 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
Please Enter the Number 
13345
Total Digit Entered are 5
*/
