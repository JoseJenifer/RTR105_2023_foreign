#include <stdio.h>

int main()

{
  int n1, n2;
  long long product;

 printf("Enter the first number - ");
 scanf("%d", &n1);


 printf("Enter the second number - ");
 scanf("%d" , &n2);

 product = (long long) n1 * n2;

 printf("The product of %d and %d is %lld\n", n1, n2, product);


return 0;

}
