#include<stdio.h>
int main()
{
   unsigned  int n,i;
   unsigned long long int factorial;
   unsigned long long int dt=(1,2,3);
   factorial=i=1;
    
   printf("Enter a Number to Find Factorial: ");
   scanf("%u",&n);
    
   printf("Enter data type need to use( 1 for char, 2 for int, 3 for long long) :  \n");
   scanf("%llu",&dt);
    
    while(i<=n)
    {
        factorial*=i;
        i++;
    }
    if(dt==1)
    {
      if (factorial<=127)
      {
        printf("The Factorial of %u is : %llu \n",n,factorial);
      }
      else   if (factorial>127)
      {
        printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n"); 
      }
    }
    if(dt==2)
    {
    if (factorial<2147483647)


    {
        printf("The Factorial of %u is : %llu \n",n,factorial);

    }
  else  if (factorial>2147483647)
     {
 printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");

    }
}
if(dt==3)
{
    if (factorial<9223372036854775807)

    {
        printf("The Factorial of %u is : %llu \n",n,factorial);

    }
else  if (factorial<9223372036854775807)

{
 printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
    }
}
else if((dt!=1)&&(dt!=2)&&(dt!=3))
{
printf("please enter a valid input. \n");
}

printf("\n");


return 0;
}
