#include<stdio.h>

void main(){

  int j=1;
  float k;
  char ch2;
 
  while(j<2){

    printf("Enter variable \n");
    scanf("%f",&k);

     if(sizeof(k)==2)
       
         printf("It is Integer type\n"); 

    else if(sizeof(k)==4)

	 printf("It is Float type\n"); 
    else
      
         printf("It is Character Type\n");
  j++;
	}

}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/10aug$ cc a1.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/10aug$ ./a.out
Enter variable 
12.10
It is Float type
*/
