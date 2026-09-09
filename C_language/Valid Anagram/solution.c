#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int i;
    int pos;
    typedef struct data{
        int count;
        char c;
        struct data *next;
    }data;
    typedef struct
    {
        data* list;
    }hash_table;
    int size;
    hash_table* table;

    size = strlen(s);
    if (size == 0 || size != strlen(t))
        return 0;
    table = calloc(size, sizeof(hash_table));
    if (!table)
        return 0;
    i = 0;
    while(s[i])
    {
        pos = ((s[i] % size) + size) % size;
        data* curr = table[pos].list;
        if (!curr)
        {
            curr = calloc(1, sizeof(data));
            table[pos].list = curr;
        }
        if (curr->count == 0)
        {
            curr->count += 1;
            curr->c = s[i];
        }
        else
        {
            while (curr)
            {
                if (curr->c == s[i])
                {
                    curr->count += 1;
                    break;
                }
                else
                {
                    data* hold;
                    hold = curr;
                    curr = curr->next;
                    if (!curr)
                    {
                        curr = calloc(1, sizeof(data));

                        curr->count = 1;
                        curr->c = s[i];
                        hold->next = curr;
                        break;
                    }
                }
    
            }

        }
        i++;
    }
    i = 0;
    while (t[i])
    {
        pos = ((t[i] % size) + size) % size;
        data *curr = table[pos].list;
        while(curr)
        {
            if (curr->c == t[i] && curr->count > 0)
            {
                curr->count -= 1;
                break;
            }
            curr = curr->next;
        }
        if (!curr)
            return 0;
        i++;
    }
    return 1;
}