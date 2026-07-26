#include <stdio.h>
#include <stdlib.h>


// int longest_linkedlist(struct ListNode* l1, struct  ListNode* l2)
// {
//     int i;
//     struct ListNode *node1;
//     struct ListNode *node2;

//     i = 0;
//     node1 = l1;
//     node2 = l2;
//     while (!node1 && !node2)
//     {
//         if (node1)
//             node1 = node1->next;
//         if (node2)
//             node2 = node2->next;
//         i++;
//     }
//     return i;
// }



struct ListNode {
    int val;
    struct ListNode *next;
  };


struct ListNode* new_node(struct ListNode* node, int data)
{
    struct  ListNode* new_node;
    struct ListNode* tail;

    tail = malloc(sizeof(struct ListNode));
    new_node = node;
    while (new_node->next != NULL)
        new_node = new_node->next;
    new_node->next = tail;
    tail->val =  data;
    tail->next = NULL;
    return node;
}

// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//     struct ListNode *node;

    

// }

int main (int argc, char* argv[])
{
    struct ListNode * node;
    int a;

    node = (struct ListNode *) (sizeof(struct ListNode));
    a = 5;
    node = new_node(node, a);
    // printf("%d", node->val);
}