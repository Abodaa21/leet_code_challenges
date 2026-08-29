#include <stdio.h>
#include <stdlib.h>


int* runningSum(int* nums, int numsSize, int* returnSize) {
    int i;
    int sum;
;
    i = 0;
    sum = 0;
    *returnSize = numsSize;
    while (i < numsSize)
    {
        sum += nums[i];
        nums[i] = sum;
        i++;
    }
    return (nums);
}


int main(void){
    int *r;
    int a[] = {1,2,3,4};
    int t;
    int i = 0;

    r = runningSum(a, 4, &t);
    while(i < 5){
        printf("%d\n", a[i]);
        i++;
    }
}