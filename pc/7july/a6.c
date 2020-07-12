#include<stdio.h>

void main(){
 
  int a;
  float b;
  char c;


    printf("Enter the no :-");
    scanf("%d",&a);
    printf("%d\n",a);
 
    printf("Enter the float :-");
    scanf("%d",&b);
    printf("%d\n",b);

    printf("Enter the character :-");
    scanf("%d",&c);
    printf("%d\n",c);
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/7july$ cc a6.c
a6.c: In function ‘main’:
a6.c:15:13: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘float *’ [-Wformat=]
     scanf("%d\n",&b);
            ~^    ~~
            %e
a6.c:16:14: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘double’ [-Wformat=]
     printf("%d\n",b);
             ~^
             %f
a6.c:19:13: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘char *’ [-Wformat=]
     scanf("%d\n",&c);
            ~^    ~~
            %hhd

aishatandekar@predatoraisha-VirtualBox:~/pc/7july$ ./a.out
Enter the no :-4
4
4
Enter the float :-5.9
1
Enter the character :-5
*.

