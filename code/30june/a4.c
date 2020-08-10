#include<stdio.h>
int main()
{
   int var1, var2;

   printf("Input the value of var1:");
   scanf("%d", &var1);

   printf("Input the value of var2:");
   scanf("%d",&var2);

   if (var1 != var2)
   {
	printf("var1 is not equal to var2\n");

	
	if (var1 > var2)
	{
		printf("var1 is greater than var2\n");
	}

	else
	{
		printf("var2 is greater than var1\n");
	}
   }

   else
   {
	printf("var1 is equal to var2\n");
   }
   return 0;
}


/*aishatandekar@predatoraisha-VirtualBox:~/pc/30june$ cc a4.c
aishatandekar@predatoraisha-VirtualBox:~/pc/30june$ ./a.out
Input the value of var1:20
Input the value of var2:89
var1 is not equal to var2
var2 is greater than var1
*/
