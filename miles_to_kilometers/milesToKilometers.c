/*
    Convert distance in miles to kilometers
*/
// include string functions
#include <stdio.h>
#define KMS_PER_MILE 1.609 /* Conversion constant */

// main function
int main(void)
{
    double miles, /* input - distance in miles*/
        kms;      /* ouput - distance in kilometers*/

    /* Get the distance in miles */
    printf("Enter the distance in miles>");
    scanf("%lf", &miles);

    /* Convert the distance in miles to kilometers */
    kms = miles * KMS_PER_MILE;

    /* Display the distance in kilometers */
    printf("That equals %f kilometers.\n", kms);

    return (0);
}