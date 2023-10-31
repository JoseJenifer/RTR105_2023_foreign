#include <stdio.h>

int main()

{
  double n1, n2, product;


 printf("Enter the first number - ");
 scanf("%lf", &n1);


 printf("Enter the second number - ");
 scanf("%lf" , &n2);

 product = n1 * n2;

 printf("The product of %lf and %lf is %lf\n", n1, n2, product);


return 0;

}
