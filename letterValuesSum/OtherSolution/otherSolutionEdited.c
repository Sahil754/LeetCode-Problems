#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int strToInt(char []);
bool isSumEqual(char * firstWord, char * secondWord, char * targetWord);

int main()
{
    /*//Example 1
    char first[20] = "acb";
    char second[20] = "cba";
    char third[20] = "cdb";*/
    
    //Example 2
    char first[20] = "aaa";
    char second[20] = "a";
    char third[20] = "aab";
    
    bool result = isSumEqual(first, second, third);
    
    printf("\n Result: %s\n\n", result ? "true" : "false");
    
    return 0;
}

bool isSumEqual(char * firstWord, char * secondWord, char * targetWord){
    int length1 = strlen(firstWord);
    int length2 = strlen(secondWord);
    int length3 = strlen(targetWord);
    int firstValue = 0, secondValue=0, targetValue=0,i;
        for(i=0;i<length1;i++)
        {
            firstValue = firstValue + ((firstWord[i]-97)*(pow(10,length1-1-i)));
        }
         for(i=0;i<length2;i++)
        {
            secondValue = secondValue + ((secondWord[i]-97)*(pow(10,length2-1-i)));
        }
         for(i=0;i<length3;i++)
        {
            targetValue = targetValue + ((targetWord[i]-97)*(pow(10,length3-1-i)));
        }
        
        if((firstValue + secondValue)==targetValue)
            return true;
        else
            return false;
}

/*int strToInt(char str[])
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
            sum = sum*10+(str[i]-97); //For 0, ASCII value is 48, so 48-48 = 0
            i++;
        }
    }
    return sum;
}*/

/*//Test code to understand a part of the code
int main()
{
    int sum = 0; //later figured out sum = 48, therefore returns 0.
    sum = sum*10+(sum-48);
    printf("%d\n", sum); //Returned -48

    return 0;
}*/
