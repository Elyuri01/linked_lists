#include "linked_lists.h"

void	ft_push_b(t_stack **head_a, t_stack **head_b)
{
    //pushes the first element in stack a to the top of stack b
    t_stack *node_a;

    if (*head_a == NULL)
        return  ;
    node_a = ft_pop_top(head_a);
    ft_lstadd_front(head_b, node_a);
}