#include "header.h"

char* clean_s(char* s)
{
    char* str;
    int     i;
    int     j;

    str = malloc(sizeof(char) * (strlen(s) + 1));
    i = 0;
    j = 0;
    while (s[i])
    {
        if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            str[j] = s[i];
            j++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            str[j] = s[i] + 32;
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return (str);
}

char *reverse(char *s)
{
    int i;
    int len;
    char tmp;

    len = strlen(s);
    i = 0;
    while (i < len / 2)
    {
        tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
        i++;
    }

    return s;
}

bool isPalindrome(char* s) {
    s = clean_s(s);
    char *t = malloc(sizeof(char) * (1 + strlen(s)));
    strcpy(t, s);
    reverse(t);
    return  strcmp(s, t) == 0;
}
