/*Original:
 
 char *s;

 s = str;
 while (*s && *s == '0') s++; //find the first non '0' element
 printf("%s\n",s); //now use s instead of str */

#include <stdio.h>
#include <string.h>


/*int removeZero(char *s){
    
}*/

int main(){
    
    // Try 1
    /*char *str  = "0030";
    char *s;

    s = str;
    while (*s && *s == '0') s++; // find the first non '0' element
    printf("%s\n",s); // now use s instead of str*/

    // Try 2
    //char s = 'Yo';
    //printf("%c",s);
    
    // Try 3
    /*char ch = 'A';
    printf("ch = %c\n",ch);
    printf("ch = %d, hence an integer\n",ch);*/
    
    // Try 4
    //int i;
    //for(i = 0; i < 10; i++) putchar('#');
    
    // Try 5
    //printf("%.*s", 10,"Yo");
    
    /*printing out the same character 10 times
    char out[100];
    memset(out, '#', 10);
    //out[10] = 0;
    printf("%s\n", out);
    
    //For counting how many characters were printed above this output
    for (int i=1; i<11; i++) {
        printf("%d",i);
    }
    printf("\n");*/
    
    return 0;
}
