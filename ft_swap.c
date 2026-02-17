#include "linked_lists.h"

void	ft_swap(t_stack **head)
{
    //swaps the 2 first elements of a stack
    t_stack *node_1;
    t_stack *node_2;
    t_stack *tmp;

    if (*head == NULL || (*head) -> next == NULL)
        return ;
    node_1 = *head;
    *head = (*head) -> next;
    node_2 = *head;
    tmp = node_2 -> next;   
    node_2 -> next = node_1;
    node_1 -> next = tmp;
}