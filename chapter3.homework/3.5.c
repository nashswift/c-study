#include <stdio.h>
int main(void)
{
    float age;

    printf("Please enter your age:");
    scanf("%f", &age);
    printf("%f years is equal to %e seconds", age, 3.156e7 * age);

    return 0;
}