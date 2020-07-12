#include <stdio.h>
int main()
{
   int i,j;
   for (i=1,j=1 ; i<3 || j<5; i++,j++)
   {
	printf("%d, %d\n",i ,j);
   }
   return 0;
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/9july$ cc a6.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/9july$ ./a.out
1, 1
2, 2
3, 3
4, 4
*/
