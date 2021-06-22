int strToInt(char str[])
{
    int i = 0, sum = 0;
    while(str[i] != '\0')
    {
        if(str[i]<97 || str[i]>106)
        {
            printf("\n Invalid input");
        }
        else
        {
            sum = sum*10+(str[i]-97);
            i++;
        }
    }
    return sum;
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
