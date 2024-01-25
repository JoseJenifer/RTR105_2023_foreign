#include<stdio.h>
void main()
{
  long long num;
  char x = 1;
  int y = 1;
  long long z = 1;
  char datatype;

  printf("Enter a decimal number:");
  scanf("%d", &num);
  
  while(getchar() != '\n');
  
  printf("Enter a datatype(1 for char,2 for int or 3 for long long):\n");
  scanf("%c",&datatype);

  
  if(datatype == '1')
  {
    char factorial = 1;
    int a = 1;
    
    while(a < num)
    {
       x *= (a+1);
       factorial *= a;
       a++;
    }
    
    if(x != factorial*num)
    {
       printf("Error. Overflow detected.\n");
    }
    
    else if( x == factorial*num)
    {
       printf("Factorial of the given number is: %d. \n",x);
    }
  }
  
  if(datatype == '2')
  {
    int factorial = 1;
    int a = 1;
    
    while(a < num)
    {
      y *= (a+1);
      factorial *= a;
      a++;
    }
    
    if(y != factorial*num)
    {
       printf("Error. Overflow Detected. \n");
    }
    
    else if(y == factorial*num)
    {
       printf("Factorial of the given number is: %d. \n",y);    
    {
  }
  
  if(datatype == '3')
  {
    long long factorial = 1;
    long long a = 1;
    
    while(a < num)
    {
      z *= (a+1);
      factorial *= a;
      a++;
    }
    
    if(z != factorial*num)
    {
      printf("Error.Overflow detected. \n");
    }
    
    else if(z == factorial*num)
    {
      printf("Factorial of the given number is: %d. \n", z);
    }
  }   
}    