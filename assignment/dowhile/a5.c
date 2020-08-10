#include<stdio.h>
#include<stdlib.h>

void main(){

    int n,ori,rev=0,rem;

    printf("Enter Any Number \n");
    scanf("%d",&n);
    
    ori=n;
    printf("%d\n",ori);
 
do{
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
  
  
 }while(n!=0);

   
    if(ori==rev){
        
      exit(0);

    }
    else{

        printf("%d\n",rev);

        
     }
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
Enter Any Number 
121
121
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ 22
22: command not found
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
Enter Any Number 
22
22
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ gedit a2.c
^C
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ cc a5.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
Enter Any Number 
222 
222
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/assignment/dowhile$ ./a.out
Enter Any Number 
10
10
1

*/
