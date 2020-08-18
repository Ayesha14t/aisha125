#include<stdio.h>

void main(){
 
  int a,b,c,ans;

  printf("Enter Three numbers \n");
  scanf("%d%d%d",&a,&b,&c);

   if(a>b && a>c) 
   printf("%d is greater %d %d %d\n",a,a,b,c);

   else if(b>a && b>c) 
   printf("%d is greater %d %d %d\n",b,a,b,c);

   else
   printf("%d is greater %d %d %d\n",c,a,b,c);
 }

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ cc a10.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/1718aug$ ./a.out
Enter Three numbers 
1
4
2
4 is greater 1 4 2

*/
