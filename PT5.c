#include<stdio.h>

int main()
{
    int n,i;
    long long int factorial;
    int dt=(1,2,3);
    factorial=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
     printf("Data types you can use \n[For char enter(1)]\n [For int enter(2)]\n [For long long int enter(3)]\n ");
    printf("Enter data type need to use : \n ");
    scanf("%i",&dt);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
        
    }
    if (factorial<127)
    while (dt=1)
    {
    printf("The Factorial of %d is : %lld \n",n,factorial);
    return 0;
    }
   if (factorial>127)
   while (dt==1)
    {


        printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
            return 0;
    }
    if (factorial<2147483647)
    while(dt=2)

    {
        printf("The Factorial of %d is : %lld \n",n,factorial);
    return 0;
    }
    if (factorial>2147483647)
    while(dt==2)
     {
 printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
            return 0;
    }

    if (factorial<9223372036854775807)
    while(dt==3)
    {
        printf("The Factorial of %d is : %lld \n",n,factorial);
    return 0;
    }
     if (factorial<9223372036854775807)
    while(dt==3)
{
 printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
            return 0;
    }
}
