#include <stdio.h>
int main(void)
{
    float quart;
    float molecules;
    float mol = 3.0e-23;

    printf("Enter the number of quarts of water: ");
    scanf("%f", &quart);
    molecules = quart * 950 / mol;
    printf("%f quarts of water contain %e molecules.\n", quart, molecules);

    return 0;
}