#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstname[50];
    char lastname[50];
    int firstnamelen;
    int lastnamelen;
    
    printf("Please enter your firstname:\n");
    scanf("%s", firstname);
    firstnamelen = strlen(firstname);
    printf("Please enter your lastname:\n");
    scanf("%s", lastname);
    lastnamelen = strlen(lastname);
    printf("%s %s\n", firstname, lastname);
    printf("%*d %*d\n", firstnamelen, firstnamelen, lastnamelen, lastnamelen);
    printf("%s %s\n", firstname, lastname);
    printf("%-*d %-*d\n", firstnamelen, firstnamelen, lastnamelen, lastnamelen);

    return 0;
}