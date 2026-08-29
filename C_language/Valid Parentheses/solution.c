#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int lenth (char *s){
    int i = 0;
    while(*s)
    {
        s++;
        i++;
    }
    return i;
}


bool parentheses_type(char c)
{
    if (c == '(' || c == '{' || c == '[')
        return true;
    return false;
}

bool right_parentheses(char c1, char c2)
{
    if (c1 == '(' && c2 == ')')
        return 1;
    if (c1 == '{' && c2 == '}')
        return 1;
    if (c1 == '[' && c2 == ']')
        return 1;
    return 0;
}

bool isValid(char* s) {
    char *string;
    int j;
    int first;
    int i = lenth(s);
    string = malloc(i + 1);
    if (!string)
        return NULL;
    j = 0;
    first = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '[' || s[i] == ']')
            {
                // printf("%c",s[i]);
                if (parentheses_type(s[i]))
                {
                    string[j] = s[i];
                    j++;
                }
                else
                {

                    if (j > 0 && right_parentheses(string[j - 1],s[i]))
                        j--;
                    else
                        return 0;
                }
            }
        i++;
    }
    if (j != 0)
        return 0;
    return 1;
}

int main(int argc, char** argv){
    if (argc < 2)
        return 1;
    printf("%d", isValid(argv[1]));
}