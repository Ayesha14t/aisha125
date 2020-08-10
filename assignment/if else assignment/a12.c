#include<stdio.h>

void main(){

int num=120;
    if(num%2 ==0){
       printf("%d is divisible by 2",num);
     if(num%3 == 0){
         printf("%d is divisible by 3",num);
  if(num%5==0){
        printf("%d is divisible by 5",num);
   }else {
     printf("%d is not divisible by 5",num);
    }
  }else{
     printf("%d is not divisible by 3",num);
  }
 }
else{
printf("%d is not divisible by 2",num);
}

}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ cc a12.c
aishatandekar@predatoraisha-VirtualBox:~/pc/a1$ ./a.out
120 is divisible by 2120 is divisible by 3120 is divisible by 5*/
