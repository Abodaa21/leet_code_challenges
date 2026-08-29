#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int lenth(char *s1)
{
    int i = 0;

    while(s1[i])
        i++;
    return (i);
}

char* check_prefix(char* s1, char* s2)
{
    int i = 0;
    int len_s1 = lenth(s1);
    int len_s2 = lenth(s2);
    char* str;

    str = malloc(sizeof(char) * (len_s1 + 1));
    if (!str)
        return NULL;
    
    while (i < len_s1 && i < len_s2 && s1[i] == s2[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return str;
}

char* longestCommonPrefix(char** strs, int strsSize) {
    int i;
    int j;
    char* prefix = strs[0];

    if (strsSize == 0)
        return "";
    j = 1;
    while (j < strsSize)
    {
        prefix = check_prefix(prefix, strs[j]);
        j++;
    }
    return prefix;

}

int main(int argc, char* argv[])
{
    char *str[] = {"flower","flow","flight"};
    printf("%s", longestCommonPrefix(str, 3));
}