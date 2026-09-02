#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {
    int i;
    typedef struct{
        int used;
        int value;
    }hash_table;
    hash_table *table;
    int pos;

    i = 0;
    table = calloc(numsSize, sizeof(hash_table));
    if (!table)
        return 0;
    while (i < numsSize)
    {
        pos = ((nums[i] % numsSize) + numsSize) % numsSize;
        if (table[pos].used == 1)
        {
            if (table[pos].value == nums[i])
                return 1;
            pos = (pos + 1) % numsSize;
            while (table[pos].used == 1)
            {
                if (table[pos].value == nums[i])
                    return 1;
                pos = (pos + 1) % numsSize;
            }
        }
    
        table[pos].used = 1;
        table[pos].value = nums[i];
        i++;
    }
    return 0;
}