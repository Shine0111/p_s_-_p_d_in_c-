/*
    Convert volumes in quarts to liters
*/
// include string functions
#include <stdio.h>
#define QUARTS_TO_LITERS 0.946353 /* Conversion constant */

// main function
int main(void)
{
    double quarts, /* input - volume in quarts*/
        liters;    /* ouput - volume in liters*/

    /* Get the volume in quarts */
    printf("Enter the volume in quarts>");
    scanf("%lf", &quarts);

    /* Convert the volume in quarts to liters */
    liters = quarts * QUARTS_TO_LITERS;

    /* Display the volume in liters */
    printf("That equals %f liters.\n", liters);

    return (0);
}