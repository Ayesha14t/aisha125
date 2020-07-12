#include<stdio.h>

void main(){

  int ch;

    printf("***MENU***\n1.C\n2.java\nEnter the choice\n");

    scanf("%d",&ch);
  

   if(ch==1)

	printf("C language\n");

  if(ch==2)

	printf("JAVA\n");

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/29june$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/pc/29june$ ./a.out
***MENU***
1.C
2.java
Enter the choice
1
C language
aishatandekar@predatoraisha-VirtualBox:~/pc/29june$ ./a.out
***MENU***
1.C
2.java
Enter the choice
2
JAVA
*/
