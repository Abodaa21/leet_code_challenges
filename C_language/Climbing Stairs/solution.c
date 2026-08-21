#include <stdio.h>
#include <stdlib.h>

static int arr[100];
static int i;
int climbStairs(int n) {
    if (i == 0)
    {
        while (i < 100)
            arr[i++] = 0;
        arr[0] =  1;
        arr[1] = 2;
        i = 2;
    }
    if (arr[n - 1] != 0)
        return (arr[n - 1]);
    while (n > i && i < 100){
        arr[i] = arr[i - 1] + arr[i - 2];
        i++;
    }
    return arr[n - 1];
}