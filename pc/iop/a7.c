 #include<stdio.h>

void main(){


 char ch;

 printf("Enter the  character  \n");

    scanf("%c",&ch);


   if(ch>=97&&ch<=122){

      printf( "%c is lower case\n",ch);

     }
   else{

 	printf( "%c is upper case\n",ch);

	}
 
     
 } 

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ ./a.out
Enter the  character  
A
A is upper case
*/
