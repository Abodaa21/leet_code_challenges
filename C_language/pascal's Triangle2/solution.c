#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* getRow(int rowIndex, int* returnSize) {
    int *buffer;
    int i;
    int arr[rowIndex + 1];
    int j;

    rowIndex ++;
    buffer = malloc(sizeof(int) * (rowIndex));
    if (!buffer)
        return NULL;
    i = 0;
    while (i < rowIndex)
        buffer[i++] = 1;
    i = 0;
    j = 1;

    while (i < rowIndex)
    {
        memcpy(arr, buffer, sizeof(int) * rowIndex);
        j = 1;
        while (j < i ){
            buffer[j] = arr[j] + arr[j - 1];
            j++;
        }
        i++;
    }
    return buffer;
}
