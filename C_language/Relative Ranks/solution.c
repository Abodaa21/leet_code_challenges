char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    char** ranks;
    typedef struct
    {
        int size;
        int arr[scoreSize][2];
    }test;
    int i;
    test* pq;
    int tail;

    pq = calloc(1, sizeof(test));
    i = 0;
    while (i < scoreSize)
    {
        tail = pq->size;
        pq->arr[tail][0] = score[i];
        pq->arr[tail][1] = i;
        while (tail > 0 && pq->arr[tail][0] > pq->arr[(tail - 1) / 2][0])
        {
            int swap[2];
            swap[0] = pq->arr[tail][0];
            swap[1] = pq->arr[tail][1];
            pq->arr[tail][0] = pq->arr[(tail - 1) / 2][0];
            pq->arr[tail][1] = pq->arr[(tail - 1) / 2][1];
            pq->arr[(tail - 1) / 2][0] = swap[0];
            pq->arr[(tail - 1) / 2][1] = swap[1];
            tail = (tail - 1) / 2;
        }
        pq->size++;
        i++;
    }
    ranks = malloc(sizeof(char *) * scoreSize);
    i = 0;
    while(i < scoreSize)
    {
        int pop[2];
    
        pq->size--;
        pop[0] = pq->arr[0][0];
        pop[1] = pq->arr[0][1];
        pq->arr[0][0] = pq->arr[pq->size][0];
        pq->arr[0][1] = pq->arr[pq->size][1];
        int index = 0;
        while(1 && index < pq->size)
        {
            int left = index * 2 + 1;
            int right = index * 2 + 2;
            int swap = index;
            if (left < pq->size && pq->arr[index][0] < pq->arr[left][0])
                swap = left;
            if (right < pq->size && pq->arr[swap][0] < pq->arr[right][0])
                swap = right;
            if (swap != index)
            {
                int swapy[2];
                swapy[0] = pq->arr[index][0];
                swapy[1] = pq->arr[index][1];
                pq->arr[index][0] = pq->arr[swap][0];
                pq->arr[index][1] = pq->arr[swap][1];
                pq->arr[swap][0] = swapy[0];
                pq->arr[swap][1] = swapy[1];
                index = swap;
            }
            else
                break;
        }
        if (i == 0)
        {
            char string[11] = "Gold Medal";
            ranks[pop[1]] = malloc(sizeof(char) * 15);
            strcpy(ranks[pop[1]], string);
        }
        else if (i == 1)
        {
            char sting[13] = "Silver Medal";
            ranks[pop[1]] = malloc(sizeof(char) * 15);
            strcpy(ranks[pop[1]], sting);
        }
        else if (i == 2)
        {
            char strin[13] = "Bronze Medal";
            ranks[pop[1]] = malloc(sizeof(char) * 15);
            strcpy(ranks[pop[1]], strin);     
        }
        else
        {
            ranks[pop[1]] = malloc(sizeof(char) * 12);
            sprintf(ranks[pop[1]], "%d", i + 1);
        }
        i++;
    }
    *returnSize = scoreSize;
    return ranks;
}
