#include "linked_lists.h"

void	ft_push_a(t_stack **head_b, t_stack **head_a)
{
    //pushes the first element in stack b to the top of stack a
    t_stack *node_b;

    if (*head_b == NULL)
        return  ;
    node_b = ft_pop_top(head_b);
    ft_lstadd_front(head_a, node_b);
}