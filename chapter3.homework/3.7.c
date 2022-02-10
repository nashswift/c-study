#include <stdio.h>
int main(void)
{
    float inch;

    printf("Enter the inches of your height: ");
    scanf("%f", &inch);
    printf("%f inches is equal to %f cm\n", inch, inch * 2.54);

    return 0;
}