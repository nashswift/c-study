#include <stdio.h>
int main(void)
{
    float cup;
    float pint;
    float ounce;
    float table_spoon;
    float tea_spoon;

    printf("Enter the number of cups: ");
    scanf("%f", &cup);
    pint = 2 * cup;
    ounce = cup / 8;
    table_spoon = ounce / 2;
    tea_spoon = table_spoon / 3;
    printf("%f cups = %f pints = %f ounces = %f table_spoon = %f tea_spoon\n", cup, pint, ounce, table_spoon, tea_spoon);

    return 0;
}