#include<stdio.h>
#include<math.h>
int main()
{
float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3, funa, funb, funx;
int k=0;

funa=sin(a);funb=sin(b);

if(funa*funb>0)
  {
   printf("Interval [%.2f;%.2f] for the sin(x) function",a,b);
   printf("No roots (or the number of even roots)\n");
   return 1;
  }

 printf("sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
 printf("sin(%7.3f)=%7.3f\n",b,sin(b));

while((b-a)>delta_x)
   {
    k++;
    x = (a+b)/2.;
    if(funa*sin(x)>0)
    a=x;
  else
   b=x;
  printf("%2d. interation: sin(%7.3f)=%7.3f\t",k,a,sin(a));
  printf("sin(%7.3f)=%7.3f\t",x,sin(x));
  printf("sin(%7.3f)=%7.3f\n",b,sin(b));
}

printf("Connection is at x=%.3f, because sin(x) is %.3f\n",x,sin(x));

return 0;
}
