/*Warning seen: Implicit conversion loses integer precision: 'unsigned long' to 'int' strlen*/

#include <stdio.h>
#include <string.h>

int stringToInteger(char string[])
{
    int digit, j = 1, m = 0;
    for(int i = strlen(string)-1; i>=0; i--)
    {
        digit = string[i];
        digit = digit - 48;
        m = m + (digit * j);
        j = j * 10;
    }
    return m;
}

int main()
{
    char string[256];
    int integer;
    printf("Enter Number: ");
    scanf("%s", string);
    integer = stringToInteger(string);
    printf("\nthe value of integer is: %d", integer);
}

