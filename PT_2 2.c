#include <stdio.h>

int main()

{

 char decnum;

    printf("Enter a non negative natural number: \n ");
    scanf("%hhd", &decnum);

    printf("The binary representation of %hhd is: ", decnum);


          int bits = 8;
     for (int i = bits - 1; i >= 0; i--)
       {
         char bit = (decnum >> i) & 1;
         printf("%hhd", bit);
       }


   printf("\n");


return 0;

}

