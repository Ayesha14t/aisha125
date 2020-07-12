#include<stdio.h>

void main(){



int x=5, ans=0;

ans= ++x + x++ + ++x + x++;  //x=5->6->7 ->8->9,temp1=6 temp2=8
                             //x+temp1=7+6=13+x(8)=21+8=29

printf("%d \t %d \n", x,ans);
}


/*output

aishatandekar@predatoraisha-VirtualBox:~/pc$ cc op2.c
aishatandekar@predatoraisha-VirtualBox:~/pc$ ./a.out
9 	 29 
aishatandekar@predatoraisha-VirtualBox:~/pc$*/
