#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>






bool isInterleave(char* s1, char* s2, char* s3) {
    if (*s3 == '\0')
        return 1;
    while(*s3 != '\0' && ((*s3 == *s1) || (*s3 == *s2)))
    {
        while (*s3 && *s3 == *s1){
            s1++;
            s3++;
        }
        while (*s3 && *s3 == *s2){
            s2++;
            s3++;
        }
    }
    return 1;
}

int main(int argc, char* argv[])
{
    printf("%d",isInterleave(argv[1], argv[2], argv[3]));
}