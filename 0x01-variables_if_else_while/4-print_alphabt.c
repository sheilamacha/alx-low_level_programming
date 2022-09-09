#include <stdio.h> 
 int main() 
 { 
         int i; 
         char ch[100]="abcdfghijklmnoprstuvwxyz"; 
         for(i=0;i<24;i++) 
         { 
                 putchar(ch[i]); 
         } 
         putchar('\n'); 
         return 0; 
 }
