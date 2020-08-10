
#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

 
    for(i = 1; i <= num; ++i)
    {
        sum =sum+i;
    }

    printf("Sum = %d", sum);

    return 0;
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/9july$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/pc/9july$ ./a.out
Enter a positive integer: 12
Sum = 78*/
