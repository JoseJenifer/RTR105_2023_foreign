#include<stdio.h>
void sortNumbers(int a, int b, int c, int order)
{
 int temp;
  if (order==1)
  {
    if (a>=b)
    {
      temp=a;
      a=b;
      b=temp;
    }

    if(b>=c)
    {
      temp=b;
      b=c;
      c=temp;
    }

    if(a>=b)
    {
      temp=a;
      a=b;
      b=temp;
    }


}

  else if(order==2)
  {
    if(a<=b)
    {
      temp=a;
      a=b;
      b=temp;
    }

    if(b<=c)
    {
      b=temp;
      b=c;
      c=temp;
    }

    if(a<=b)
    {
      temp=a;
      a=b;
      b=temp;
    }


}

    else
    {
       printf("Invalid output order. Please type 1 for ascending order and 2 for descending order. \n");
       return ;
    }
       printf(" Sorted sequence of numbers is: %d, %d, %d \n",a,b,c);
}    

int main()
{
   int a,b,c,order;
   printf("Enter first decimal number:\n");
   scanf("%d",&a);
   printf("Enter second decimal number:\n");
   scanf("%d",&b);
   printf("Enter third decimal number:\n");
   scanf("%d",&c);

   printf("Enter the order of sequence (1 for ascending or 2 for descending):\n");
   scanf("%d",&order);

   sortNumbers(a,b,c,order);

return 0;
}
