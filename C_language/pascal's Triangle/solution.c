#include <stdlib.h>


int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int i;
    int **arr;
    int j;

    arr = malloc(sizeof(int *) * numRows);
    *returnColumnSizes = malloc(sizeof(int) * numRows);
    i = 0;
    while (i < numRows)
    {
        arr[i] = malloc(sizeof(int) * (i + 1));
        j = 0;
        while (j <= i)
        {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else{
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            j++;
        }
        (*returnColumnSizes)[i] = j;
        i++;
    }
    *returnSize = numRows;
    return arr;
}