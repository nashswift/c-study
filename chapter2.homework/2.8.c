#include <stdio.h>
void one_three(void);
void two(void);
int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("\n");
    two();
    printf("\nthree\ndone!\n");
    
    return 0;
}
void one_three(void)
{
    printf("one");
}
void two(void)
{
    printf("two");
}