  #include<stdio.h>

void main(){


 char ch;

 printf("Enter the character you want to check if it is vowel or constant\n");

 scanf("%c",&ch);


 	if(ch=='a'||ch=='e'||ch=='i'|| ch=='o'||ch=='u'){

 	  printf("%c is vowel \n",ch);

   	    }
        else

           printf("%c is constant\n",ch);

 } 

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/iop$ ./a.out
Enter the character you want to check if it is vowel or constant
a
a is vowel */
