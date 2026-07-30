#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

  typedef struct ListNode {
      int val;
      struct ListNode *next;
  }t_list;

bool hasCycle(t_list *head) {
    t_list *node;
    t_list *node2;

    node = head;
    while(!node->next){
        node = node->next;
        node2 = head;
        while(node2->)
    }

    
}