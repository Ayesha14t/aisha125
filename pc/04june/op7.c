#include<stdio.h>

void main(){


int x=12, y=10,ans=0;
ans=x>y;              //t
printf("%d\n",ans); 

ans=x<y;              //f
printf("%d\n",ans);

ans=x>=y;             //t
printf("%d\n",ans);

ans=x<=y;            //f
printf("%d\n",ans);

ans=x!=y;            //t
printf("%d\n",ans);
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc$ cc op7.c
aishatandekar@predatoraisha-VirtualBox:~/pc$ ./a.out
1
0
1
0
1
aishatandekar@predatoraisha-VirtualBox:~/pc$ */
