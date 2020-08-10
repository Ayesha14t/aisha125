#include<stdio.h>
#include<math.h>

void main(){

    int n;

    printf("Enter Any Number \n");
    scanf("%d",&n);
   
do{
    
     if(n%2==0)

       break;

     else

       printf("%d\n",n);
   
  
 }while(0);

}

/*
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
Enter Any Number 
23
23
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ cc a2.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
Enter Any Number 
2

*/

