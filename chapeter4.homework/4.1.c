#include <stdio.h>
int main(void)
{
    char lastname[50]; //姓
    char firstname[50]; //名

    printf("Please enter your firstname:\n");
    scanf("%s", firstname);
    printf("Please enter your lastname:\n");
    scanf("%s", lastname);
    printf("You're %s %s\n", firstname, lastname);
    
    return 0;
}