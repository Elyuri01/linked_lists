#include "linked_lists.h"

t_stack *ft_pop_top(t_stack **head)
{
    //removes the first node [by setting the head pointer that points to the first node to null] and returns a pointer to the first node
    t_stack *copy;

    if (*head == NULL)
        return (NULL);
    copy = *head;
    *head = (*head) -> next;
    copy -> next = NULL;
    return(copy);
}