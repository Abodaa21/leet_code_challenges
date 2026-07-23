#include <stdio.h>
#include <stdlib.h>


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i;
    int *arr;

    i = digitsSize - 1;
    while (i >= 0)
    {
        if (digits[i] != 9)
        {
            digits[i] += 1;
            arr = malloc(sizeof(int) * (digitsSize));
            if (!arr)
                return NULL;
            i = 0;
            while (i < digitsSize){
                arr[i] = digits[i];
                i++;
            }
            *returnSize = digitsSize; 
            return arr;
        }
        else
        {
            digits[i] = 0;
            i--;
        }
    }
    arr = malloc(sizeof(int) * (digitsSize + 1));
    if (!arr)
        return NULL;
    arr[0] = 1;
    i = 0;
    while (i < digitsSize)
    {
        arr[i + 1] =  digits[i];
        i++;
    }
    *returnSize = digitsSize + 1;
    return arr;
}






int main(int argc, char* argv[])
{
    int t = 0;
    int *hi = &t;
    int a[] = {1, 2, 3};
    int* arr = plusOne(a, 3, hi);

    int i = 0;
    while(i < 1)
        printf("%d\n", arr[i++]);
}