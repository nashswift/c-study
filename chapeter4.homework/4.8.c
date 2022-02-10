#include <stdio.h>
int main(void)
{
    float mile;
    float gallon;
    float hkm;
    float L;

    printf("Please enter the length of your trip:\n");
    scanf("%f", &mile);
    hkm = mile * 0.01609;
    printf("Please enter the cost of the fuel oil in your trip:\n");
    scanf("%f", &gallon);
    L = gallon * 3.785;
    printf("The length of your chip is equal to %.1f hkm.\n", hkm);
    printf("The cost of the fuel oil in your chip is equal to %.1f L.\n", L);

    return 0;
}