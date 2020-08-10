
#include<stdio.h>

 void main(){
 
      int cube=1,n1,n2;
      int sq=1;


    printf("Please Enter Lower bound \n");
    scanf("%d",&n1);


     printf("Please Enter Upper bound \n");
    scanf("%d",&n2);
   
    for(int i=n1;i<=n2;i++){

       if(i%2==0){

		sq=i*i;
               
                printf("%d\n",sq);
      }
  
       else {
         
                cube=i*i*i;
        
                printf("%d\n",cube);
         
            }
        }


  }
/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a10.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
Please Enter Lower bound 
1
Please Enter Upper bound 
5
1
4
27
16
125
*/
