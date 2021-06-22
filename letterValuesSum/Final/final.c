//isSumEqual problem final solution with self made testCase

#include<stdio.h>
#include <stdbool.h>

int strToInt(char []);
bool isSumEqual(char * firstWord, char * secondWord, char * targetWord);

int main()
{
    char first[20];
    char second[20];
    char third[20];
    
    printf("\n Enter any string that is integer format: ");
    scanf("%s", first);

    printf("\n Enter any string that is integer format: ");
    scanf("%s", second);
    
    printf("\n Enter any string that is integer format: ");
    scanf("%s", third);
    
    bool result = isSumEqual(first, second, third);
    
    printf("\n Result: %s\n\n", result ? "true" : "false");
    
    return 0;
}

bool isSumEqual(char * firstWord, char * secondWord, char * targetWord){
    int first, second, target;
    
    first = strToInt(firstWord);
    second = strToInt(secondWord);
    target = strToInt(targetWord);
    
    if(first + second == target)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int strToInt(char str[])
{
    int i = 0, sum = 0;
    while(str[i] != '\0')
    {
        if(str[i]<97 || str[i]>106)     // 48-57 0-9
        {
            printf("\n Unable to convert into integer");
        }
        else
        {
            sum = sum*10+(str[i]-97);
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

