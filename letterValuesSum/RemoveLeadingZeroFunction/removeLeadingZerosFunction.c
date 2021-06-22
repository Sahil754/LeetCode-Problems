#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char *str  = "0030";
    char *s = NULL;

    s = str;
    while (*s == '0') //Different line in original as seen below
    {
        s++;
        
    } // find the first non '0' element
    printf("%s\n",s); // now use s instead of str
    
    //Original with values I added above it for the program to work
    /*
    char *str  = "0030";
    char *s = NULL;

    s = str;
    while (*s && *s == '0') s++; // find the first non '0' element
    printf("%s\n",s); // now use s instead of str
     */
    
    return 0;
    
}
