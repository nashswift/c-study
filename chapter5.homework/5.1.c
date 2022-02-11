#include <stdio.h>
#define M_PER_H 60
int main(void)
{
    int time;
    int minute, hour;
    
    printf("Please enter a number of time in minutes:\n");
    scanf("%d", &time);
    while (time > 0)
    {
        hour = time / M_PER_H;
        minute = time % M_PER_H;
        printf("%d minutes is equal to %d hours and %d minutes.\n", time, hour, minute);
        printf("Please enter the next number:\n");
        scanf("%d", &time);
    }
    
    return 0;
}