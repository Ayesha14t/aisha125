#include<stdio.h>

void main(){

int subval=15;
if((subval++&&subval--)){


    printf("subval:%d\n",subval);


}


if((subval--||subval)){


     printf("subval:%d\n",subval);


}

if((subval>subval)){


    printf("subval:%d\n",subval);


}
 
}
/*aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a6.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
subval:15
subval:14
*/
