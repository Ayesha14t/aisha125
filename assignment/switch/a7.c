#include<stdio.h>

void main(){


  int e=76,m=87,s=95,h=79,g=90; // english,maths,science,history,geography

  int ch=(e>75&&m>75&&s>75&&h>75&&g>75);

 switch(ch){

	case 1: 	
		printf("First class\n");
		break;
        case 0:
		printf("other than first class\n");
		break;

    }

}


/*aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ cc a7.c
aishatandekar@predatoraisha-VirtualBox:~/pc/switch$ ./a.out
First class*/


