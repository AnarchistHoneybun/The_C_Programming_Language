#include <stdio.h>

/* print Celsius-Fahrenheit table
for c = 0, 20, ..., 300 */

main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    celsius = lower;
    printf("Celsius | Fahrenheit\n");
    while (celsius <= upper) {
        fahr = (celsius*1.8)+32;
        printf("%7.0f | %7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
