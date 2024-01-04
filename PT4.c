#include<stdio.h>
int main()
{
  int  num;
  char datatype;

  printf("Enter a decimal number:");
  scanf("%d", &num);
  
  while(getchar() != '\n');
  
  printf("Enter a datatype(c for char,i for int or ll for long long):\n");
  scanf("%c",&datatype);

  long long result = 1;
  int i =1;

  long long temp = 0;

  while (i<= num)
  {
    temp=result*i;
    if(temp/i!=result)
    {
      printf("error overflow for given datatype.\n");
      return 0;
    }
    
   result = temp;
   i++;
  }
  
  printf("factorial of %d with datatype %c: %lld\n",num, datatype, result);
  return 0;
}
