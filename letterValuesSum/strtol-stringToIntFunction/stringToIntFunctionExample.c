#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // Try 1
    /*char *str  = "0030";
    char *s = NULL;

    s = str;
    while (*s == '0')
    {
        s++;
        
    } // find the first non '0' element
    printf("%s\n",s); // now use s instead of str*/
    
    char str[] = "0210";
    long int x = strtol(str, NULL, 10);
    printf("The number is %li\n", x);
    
    return 0;
    
}
