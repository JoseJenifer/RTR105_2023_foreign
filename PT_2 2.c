#include<stdio.h>
#include<stdint.h> 
#include<math.h>
int main()       
{  
 char num; 
 printf("\n");
 
 printf("Enter a natural number: ");        
 scanf("%hhd", &num);  
 printf("Number: 0x%X\n", num);   
 printf("%hhd", ((num & 0x80) >> 7));  
 printf("%hhd", ((num & 0x40) >> 6)); 
 printf("%hhd", ((num & 0x20) >> 5));
 printf("%hhd", ((num & 0x10) >> 4));
 printf("%hhd", ((num & 0x08) >> 3)); 
 printf("%hhd", ((num & 0x04) >> 2));
 printf("%hhd", ((num & 0x02) >> 1));  
 printf("%hhd", ((num & 0x01) >> 0));
 
 printf("\n");   
 return 0;     
}
