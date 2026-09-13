#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

struct ListNode{
    int val;
    struct ListNode* next;
};


struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* next;
    struct ListNode* pre;
    struct ListNode* curr;

    curr = head;
    pre = NULL;
    while(curr)
    {
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}