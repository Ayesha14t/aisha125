#include<stdio.h>

void main(){
 
  int a;
  float b;
  char c;


    printf("Enter the no :-");
    scanf("%d",&a);
    printf(" %d\n",a);
 
    printf("Enter the float :-");
    scanf("%f",&b);
    printf(" %f\n",b);

    printf("Enter the character :-");
    scanf(" %c",&c);  //give space  infront of %c that enter character is taken by the space .
    printf("%c\n",c);  
}



/*aishatandekar@predatoraisha-VirtualBox:~/pc/7july$ cc a9.c
aishatandekar@predatoraisha-VirtualBox:~/pc/7july$ ./a.out
Enter the no :-5
 5
Enter the float :-17.8
 17.799999
Enter the character :-4
4
*/
