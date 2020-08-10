#include<stdio.h>
int main()
{
	int marks;
         

         printf("Enter your marks:");
         scanf("%d",&marks);

	if(marks>75){

		printf("First class");

	}
	else if(marks>65){

		printf("Second class");

	}
	else if(marks>55){

		printf("Third class");

	}
	else{

		printf("Fourth class");

	}
	return 0;
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/30june$ cc a9.c
aishatandekar@predatoraisha-VirtualBox:~/pc/30june$ ./a.out
Enter your marks:49
Fourth class*/
