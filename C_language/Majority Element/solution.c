
int majorityElement(int* nums, int numsSize) {
    int i;
    int pos;
    typedef struct
    {
        int value;
        int times;
        int used;
    }table;
    table* counter;
    int target;

    if (numsSize % 2 == 0)
        target = numsSize / 2;
    else
        target = (numsSize  / 2) + 1;
    counter = calloc(numsSize, sizeof(table));
    i = 0;
    while (i < numsSize)
    {
        pos = ((nums[i] % numsSize) + numsSize) % numsSize;
        while (counter[pos].used && counter[pos].value != nums[i])
            pos = (pos + 1) % numsSize;
        counter[pos].used = 1;
        counter[pos].times += 1;
        counter[pos].value = nums[i];
        if (counter[pos].times == target)
            return counter[pos].value;
        i++;
    }
    return 0;
}