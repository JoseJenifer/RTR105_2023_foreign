//let investigate data types and variables

#include <stdio.h>


int main(void)
 {
 char c, test_symbol;//declaration of discrete variables
                     //this is just creation of correspodence
                     //variable name (or identificator) VS
                     //some place and some amount of bytes in memory
printf("Value of c variable as symbol: %c\n", c);
printf("Value of c variable as integer number (dec): %d\n",c);
printf("Value of c variable as integer number (oct): %#o\n",c);
printf("Value of c variable as integer number (hex): %#x\n",c);
//after declaration value of variable isnt known
printf("\n");
//that is why it is better but not obligatory) to use definition
char c_new = 85; //definition of discrete variable
                 //is declaration + assigning of value
                 // = assigning operation (right part value is written
                 // in memory place mentioned by the left part)
//there is some time (in microseconds or in nanoseconds etc.) between
//every action
printf("Value of c variable as symbol: %c\n", c_new);
printf("Value of c variable as integer number (dec): %d\n",c_new);
printf("Value of c variable as integer number (oct): %#o\n",c_new);
printf("Value of c variable as integer number (hex): %#x\n",c_new);

// the role of variable is to BE VARIED (changed)
//when we need  we can assign new value!
c = 'Y';
printf("Value of c variable as symbol: %c\n", c);
printf("Value of c variable as integer number (dec): %d\n",c);
printf("Value of c variable as integer number (oct): %#o\n",c);
printf("Value of c variable as integer number (hex): %#x\n",c);

printf ("\n");
c = 0105;
printf("Value of c variable as symbol: %\n",c);
printf("Value of c variable as integer number (dec): %d\n",c);
printf("Value of c variable as integer number (oct): %#o\n",c);
printf("Value of c variable as integer number (hex): %#x\n",c);


 return 0;
}
