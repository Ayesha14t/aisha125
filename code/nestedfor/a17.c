#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");
    
    char ch ='A';
    int x=1;
 
     for(int i=1;i<=4;i++){ 
  
        //  char ch ='A';
     
        for(int j=1;j<=i;j++){
        
            if(j==2||j==4)
                 
                printf("%d ",x);

           printf("%c ",ch);
   
        ch++;
        x++;
            
 
      }

      printf("\n");
      
   

  }

   
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ cc a17.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ ./a.out
Design Pattern 
 
A 
B 3 C 
D 5 E F 
G 8 H I 10 J */
