#include<stdio.h>  
#include <string.h>    
int main(){    
 char ch[20]={'t', 'p', 'o', 'i', 'n', 't', 't', 'e', 'c', 'h', '\0'};     
   char ch2[20];    
   strcpy(ch2,ch);    
   printf("Value of second string is: %s",ch2);    
 return 0;    
}    
