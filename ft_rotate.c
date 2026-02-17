#include "linked_lists.h"

void    ft_rotate(t_stack **head)
{
    //shift the position of the first element in the stack to the last position in the stack
    t_stack *node_1;

    if (*head == NULL || (*head) -> next == NULL)
        return ;
    node_1 = ft_pop_top(head);
    ft_lstadd_back(head, node_1);
}