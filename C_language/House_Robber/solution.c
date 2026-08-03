#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rob(int* nums, int numsSize) {
    static int arr[100];
    int i = 0;

    if (numsSize == 0)
        return 0;
    if (numsSize == 1)
        return nums[0];
    if (numsSize == 2)
        return fmax(nums[0], nums[1]);
    while (i < numsSize)
    {
        if (i == 0 || i == 1)
            arr[i] = nums[i];
        else if (i == 2)
            arr[i] = fmax(nums[0], 0) + nums[2];
        else
            arr[i] = fmax(arr[i - 2], arr[i - 3]) + nums[i];
        i++;
    }
    return fmax(fmax(arr[numsSize - 1], arr[numsSize - 2]), arr[numsSize - 3]);
}

