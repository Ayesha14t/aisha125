#include<stdio.h>
#include<math.h>

void main(){

    int n;

    printf("Enter Any Number \n");
    scanf("%d",&n);
   
do{
    
     n--;
     printf("%d\n",n);
  
 }while(n!=0);

}

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
Enter Any Number 
5
4
3
2
1
0

*/
