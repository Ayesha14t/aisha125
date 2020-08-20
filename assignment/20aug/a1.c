#include<stdio.h>

void main(){

  int side1, side2,hyp;

  printf("Enter the side1 = ");
  scanf("%d",&side1);

  printf("Enter the side2 = ");
  scanf("%d",&side2);

  printf("Enter the Hypotenuse = ");
  scanf("%d",&hyp);

  if(( side1*side1 + side2*side2 )/hyp==hyp ){

       printf("Triangle satisfies the pythagorus Therom \n");

  }
   
   else{
   
        printf("Triangle doesnot satisfies the pythagorus Therom \n");

    }
}

/*

aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/20aug$ ./a.out
Enter the side1 = 3
Enter the side2 = 4
Enter the Hypotenuse = 5
Triangle satisfies the pythagorus Therom 

*/
