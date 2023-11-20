#include<stdio.h>
int main()
{
double num;
printf("Enter decimal number:\n");
scanf("%lf",&num);

char datatype;
printf("Enter a data type (c for char, i for int, l for lon long):\n");
scanf("%c", &datatype);

long long factorial =1;
if (datatype=='l'||datatype=='i'&& num<0)
{
printf("The calculation is not possible for negative numbers for slected datatypes: \n");
return 1;
}
for(long long i=2;i<=num;++i)
{
if(datatype=='i'&& factorial>2147483647/num)
{printf("Calculation is not possible for given datatype \n");
return 1;}

if(datatype=='l'&&factorial>9223372036854775807/num)
{printf("calculation is not possilble for the given datatype \n");
return 1;}

if(datatype=='c'&&factorial>255/num) 
{printf("Calculation is not possible for the given datatype \n");
return 1;}


factorial *= i;

}
printf("factorial %lld: \n", factorial);
return 0;
}
