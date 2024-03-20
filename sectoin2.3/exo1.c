#include <stdio.h>

int main()
{
    int first, second, third;

    printf("Enter three integers> ");
    scanf("%d%d%d", &first, &second, &third);

    printf("You have entered: %d, %d, %d .", first, second, third);
    return 0;
}