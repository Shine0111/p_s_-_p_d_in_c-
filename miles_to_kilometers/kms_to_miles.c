/*
    Convert distance in kilometers to miles
*/
#include <stdio.h>
#define KMS_PER_MILE 1.609 /* Conversion constant */

int main(void)
{
    double kms,
        miles;

    /* Get the distance in kms */
    printf("Enter the distance in kms> ");
    scanf("%lf", &kms);

    /* Convert the kms to miles */
    miles = kms / KMS_PER_MILE;

    /* Output the miles */
    printf("That is %f in miles.", miles);

    return (0);
}
