#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rob(int* nums, int numsSize) {
    int previous1;
    int previous2;
    int previous3;
    int i;
    int tmp;

    if (numsSize == 0)
        return 0;
    if (numsSize == 1)
        return nums[numsSize - 1];
    if (numsSize == 2)
        return fmax (nums[numsSize - 2], nums[numsSize - 1]);
    previous1 = nums[0];
    previous2 = nums[1];
    previous3 = nums[2] + fmax(nums[0], 0);
    for (i = 3; i < numsSize; i++){
        tmp = previous3;
        previous3 = fmax(previous2, previous1) + nums[i];
        previous1 = previous2;
        previous2 = tmp;
    }
    return fmax(fmax(previous1, previous2), previous3);
}


int main(int argc, char* argv[]){
    int arr[] = {1,2};

    printf("%d",rob(arr, 4));

}