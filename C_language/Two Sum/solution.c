#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    typedef struct hash
    {
        int index;
        int value;
        int used;
    }hash_table;
    int*    result;
    int     pos;
    int     i;
    hash_table*    table;
    int     component;

    table = calloc(numsSize, sizeof(hash_table));
    result = malloc(sizeof(int) * 2);
    i = 0;
    while (i < numsSize)
    {
        component = target - nums[i];
        pos = ((component % numsSize) + numsSize) % numsSize;
        while(table[pos].used)
        {
            if (table[pos].value == component)
            {
                result[0] = table[pos].index;
                result[1] = i;
                free(table);
                *returnSize = 2;
                return result;
            }
            pos = (pos + 1) % numsSize;
        }
        pos = ((nums[i] % numsSize) + numsSize) % numsSize;
        while(table[pos].used)
            pos = (pos + 1) % numsSize;
        table[pos].used = 1;
        table[pos].value = nums[i];
        table[pos].index = i;
        i++;
    }
    free(result);
    free(table);
    *returnSize = 0;
    return NULL;
}