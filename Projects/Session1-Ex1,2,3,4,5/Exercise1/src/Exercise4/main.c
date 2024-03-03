#include <stdio.h> 
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
 main() { 
int fahr, celsius, kelvin; 
int lower, upper, step; 
lower = 0;/* lower limit of temperature scale 
*/ upper = 300; /* upper limit */ 
step = 20; /* step size */ 
fahr = lower; 

printf("Fahr Celsius Kelvin \n ");
while (fahr <= upper)
 { 
celsius = 5 * (fahr - 32) / 9;
kelvin = celsius + 273.15;
 printf("%d\t%d\t%d\n", fahr, celsius, kelvin);
 fahr = fahr + step;
 } 
}