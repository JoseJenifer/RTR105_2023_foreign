#include<stdio.h>
#include<stdlib.h>
void printMessage()
{
printf("Hello! This is a function without arguments and without return.\n");
}

void printSum(int a, int b)
{
printf("Sum: %d\n",a+b);
}
int generateRandomNumber()
{
return rand();
}

int calculateSquare(int num)
{
return num *num;
}

int main()
{
printMessage();
 

int x=5, y=7;
printSum(x,y);


int randomNum = generateRandomNumber();
printf("Random number: %d\n",randomNum);

int number = 4;
int square = calculateSquare(number);
printf("Square of %d: %d\n", number, square);
return 0;
}

