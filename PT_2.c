#include <stdio.h>

int main()

{

 char decnum;

 printf("\n");

    printf("Enter a non negative natural number: \n ");
    scanf("%hhd", &decnum);

    if (decnum < 0)
    {
      printf("The entered number is not a non negative natural number. Please enter a non nengative natural number: \n");
    }
    else
    {
    printf("The binary representation of %hhd is: ", decnum);


          int bits = 8;
     for (int i = bits - 1; i >= 0; i--)
       {
         char bit = (decnum >> i) & 1;
         printf("%hhd", bit);
       }


   printf("\n");

    }
printf("\n");
 
return 0;

}

