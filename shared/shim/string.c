#include "string.h"

#include <stdio.h>
#include <string.h>
#include <malloc.h>

char* mystrtok(char* s, char* delm) {
    static int currIndex = 0;
    if(!s || !delm || s[currIndex] == '\0') return NULL;
    char* W = (char*)malloc(sizeof(char) * 100);
    int i = currIndex, k = 0, j = 0;

    while(s[i] != '\0') {
        j = 0;
        while(delm[j] != '\0') {
            if(s[i] != delm[j])
                W[k] = s[i];
            else
                goto It;
            j++;
        }

        i++;
        k++;
    }
It:
    W[i] = 0;
    currIndex = i + 1;
    //Iterator = ++ptr;
    return W;
}

char* mystrcat(char *dest, const char *src)
{
    char *rdest = dest;

    while (*dest)
      dest++;
    while ((*dest++ = *src++));

    return rdest;
}
