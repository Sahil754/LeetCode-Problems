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
