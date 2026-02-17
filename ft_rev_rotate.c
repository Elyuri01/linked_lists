#include "linked_lists.h"

void    ft_rev_rotate(t_stack **head)
{
    //shift the position of the last element in the stack to the first position in the stack
    t_stack *last_node;
    t_stack *copy;

    if (*head == NULL || (*head) -> next == NULL)
        return  ;
    last_node = ft_lstlast(*head);
    copy = *head;
    while (copy -> next -> next != NULL)  // "is there something after next?"
    {
        copy = copy -> next;
    }
    copy -> next = NULL;
    ft_lstadd_front(head, last_node);
}