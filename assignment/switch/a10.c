#include<stdio.h>

void main(){

  int num1,num2,num3;

	 printf("Enter the two Number:");
	 scanf("%d%d",&num1,&num2);

		 if(num1>0&&num2>0){
 
			
			printf("Entered no is Positive\n");
			num3=num1*num2;
			
			printf("Multiplied no %d\n",num3);
	
  			switch(num3%2==0){

				case 1: printf("Entered no is Even\n");
					break;

				case 2: printf("Entered no is odd\n");
					break;
		}

	  }
		else{

			printf("Sorry negative numbers not allowed\n");
 
		}

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ cc a10.c
a10.c: In function ‘main’:
a10.c:18:6: warning: switch condition has boolean value [-Wswitch-bool]
      switch(num3%2==0){
      ^~~~~~
aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ ./a.out
Enter the two Number:-2
9
Sorry negative numbers not allowed
*/

/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ ./a.out
Enter the two Number:10
20
Entered no is Positive
Multiplied no 200
Entered no is Even
*/
