  
#include <stdio.h> 
  
int main() 
{ 
    
  
    
    if (0) 

        printf("0"); 
  
    
    else if ('-a') 

        printf("-a"); 
  
    
    else if (010) 

        printf("010"); 
  
 
    else
        printf("null"); 
  
    return 0; 
}

/*aishatandekar@predatoraisha-VirtualBox:~/pc/30june$ cc a3.c
a3.c: In function ‘main’:
a3.c:14:14: warning: multi-character character constant [-Wmultichar]
     else if ('-a')
              ^~~~
aishatandekar@predatoraisha-VirtualBox:~/pc/30june$ ./a.out
-a*/
