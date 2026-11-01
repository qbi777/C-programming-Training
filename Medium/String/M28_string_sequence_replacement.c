/*
M28: Replace Character Sequences (bbc, bbe, bb)

Problem: Replace bbc  $, bbe  &, bb  * (some sheets use @ for bb). Longer
sequences are checked first.

Explanation: Scan left to right; test the 3-character sequences before the 2-character
one.

Sample: 
	abbdebbchi  a*de$hi; 
	bbcbbebb  $&*; 
	bcbbc  bc$

*/


#include <stdio.h>
#include <string.h>

void replaceSequences(char str[])
{
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        if (strncmp(&str[i], "bbc", 3) == 0)
        {
            str[j++] = '$';
            i += 3;
        }
        else if (strncmp(&str[i], "bbe", 3) == 0)
        {
            str[j++] = '&';
            i += 3;
        }
        else if (strncmp(&str[i], "bb", 2) == 0)
        {
            str[j++] = '*';
            i += 2;
        }
        else
        {
            str[j++] = str[i++];
        }
    }

    str[j] = '\0';
}

int main()
{
    char str[] = "abbdebbchi";

    replaceSequences(str);
    printf("%s\n", str);

    return 0;
}


