#include <stdio.h>
int main(void)
{
    float speed;
    float size;
    float time;

    printf("Please enter the download speed of the file:\n");
    scanf("%f", &speed);
    printf("Please enter the size of the file:\n");
    scanf("%f", &size);
    time = size * 8 / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n", speed, size, time);

    return 0;
}