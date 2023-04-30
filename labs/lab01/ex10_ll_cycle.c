#include <stddef.h>
#include "ex10_ll_cycle.h"

int ll_has_cycle(node *head) {
    if(head == NULL || head->next == NULL)
        return 0;
    node* fast_ptr = head->next->next;
    node* slow_ptr = head;
    while(fast_ptr != slow_ptr) {
        slow_ptr = slow_ptr->next;
        if(fast_ptr == NULL || fast_ptr->next == NULL)
            return 0;
        else
            fast_ptr = fast_ptr->next->next;
    }
    // the list is cyclic
    return 1;
}
