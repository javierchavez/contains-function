/*
    Javier C
 */

/*
 This is a contains opperation. Checks to see if one string contains another.
 returns postion of first char if found
 returns -1 if not found
 */
int findString(char srcStr[], char toFind[])
{
    int y = 0, x = 0;

    while (srcStr[x] && toFind[y]) {
        
        if (srcStr[x] == toFind[y]) { y++; }
        else { y = 0; }
        
        x++;
    }

    if (toFind[y]) { return -1; }
    
    return x-y;
    
}
