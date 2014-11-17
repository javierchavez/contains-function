/*
    Javier C
 */

#include <stdio.h>

int findString(char [], char []);

int main(int argc, const char * argv[]) {

    char find[] = "hat";
    
    /* TESTS */
    printf("Test 1\n");
    printf("%i should be 3", findString("a chatterbox", find));
    
    printf("\n\nTest 2\n");
    printf("%i should be 0", findString("hat chatterbox", find));
    
    printf("\n\nTest 3\n");
    printf("%i should be 10", findString("a chajtterhat", find));
    
    printf("\n\nTest 4\n");
    printf("%i should be -1", findString("a chaftterbox", find));
    printf("\n");

    
    return 0;
}


/*
 This is a contains opperation. Checks to see if one string contains another.
 returns postion of first char if found
 returns -1 if not found
 */
int findString(char srcStr[], char toFind[])
{
    /* 
        x= index of srcStr 
        y= index of toFind
    */
    int y = 0, x = 0;
    
    /* keep checking while chars are avail. */
    while (srcStr[x] && toFind[y])
    {
        /* increment to next char in toFind str */
        if (srcStr[x] == toFind[y])
        {
            y++;
        }
        /* if the chars dont match reset to begining of toFind str */
        else
        {
            y = 0;
        }
        /* always increment next char in src str */
        x++;
    }
    
    /*  since we reset when not found we can only expect this not to happen when
        str is found in src str
        
        eg. this will not exec when toFind == '\0' or when a complete iteration of toFind is done
     */
    if (toFind[y])
    {
        return -1;
    }
    /* get the starting position of string */
    return x-y;
    
}
