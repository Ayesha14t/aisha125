#include<stdio.h>

void main(){

  int ch;

    printf("***MENU***\n1.pizza\n2.burger\nEnter the choice\n");
    scanf("%d",&ch);
  

   if(ch==1)
	printf("this is pizza\n");

  if(ch==2)
	printf("this is burger\n");

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/29june$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/pc/29june$ ./a.out
***MENU***
1.pizza
2.burger
Enter the choice
1
this is pizza
aishatandekar@predatoraisha-VirtualBox:~/pc/29june$ ./a.out
***MENU***
1.pizza
2.burger
Enter the choice
2
this is burger
*/
