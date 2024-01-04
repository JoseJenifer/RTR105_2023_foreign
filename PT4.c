#include<stdio.h>
int main()
{
  int num;
  char datatype;
  
  printf("Enter a decimal number: \n");
  scanf("%d",&num);
 
  while(getchar()!='\n');

  printf("Enter datatype(c for char,i for int, or ll for long long): \n");
  scanf("%c",&datatype);

  long long result = 1;
  int i = 1;

  long long temp = 0;

  while(i <= num)
  {
    temp = result*i;
     
    if(temp/i != result)
    {
      printf("Error:Overflow for the given datatype.\n");
      return 0;
    }
   
    result = temp;
    i++;
  }

  printf("Factorial pf %d with the given datatype is : &lld \n", num, result);
  
  return 0;

}