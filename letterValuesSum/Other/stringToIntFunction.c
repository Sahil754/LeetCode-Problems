//How to conver string to int without using library functions in C
#include<stdio.h>

int strToInt(char []);

int main()
{
    int value;
    char str[20];
    
    printf("\n Enter any string that is integer format: ");
    scanf("%s", str);
    
    value=strToInt(str);
    
    printf("\n Equivalent integer value: %d\n", value);
    
    return 0;
}

int strToInt(char str[])
{
    int i = 0, sum = 0;
    while(str[i] != '\0')
    {
        if(str[i]<48 || str[i]>57)     // 48-57 0-9
        {
            printf("\n Unable to convert into integer");
        }
        else
        {
            sum = sum*10+(str[i]-48); //For 0, ASCII value is 48, so 48-48 = 0
            i++;
        }
    }
    return sum;
}

/*//Test code to understand a part of the code
int main()
{
    int sum = 0; //later figured out sum = 48, therefore returns 0.
    sum = sum*10+(sum-48);
    printf("%d\n", sum); //Returned -48

    return 0;
}*/
