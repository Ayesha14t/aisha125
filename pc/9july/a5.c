#include <stdio.h>
int main()
{
   for (int i=0; i<2; i++)
   {
	for (int j=0; j<4; j++)
	{
	   printf("%d, %d\n",i ,j);
	}
   }
   return 0;
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/9july$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/9july$ ./a.out
0, 0
0, 1
0, 2
0, 3
1, 0
1, 1
1, 2
1, 3
*/
