#include <stdio.h>

main() /* Fahrenheit-Celsius table */
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
