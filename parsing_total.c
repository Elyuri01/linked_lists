#include "tmp.h"

void    parse_and_stack_init(int argc, char  **argv, t_stack **head)
{
    /*The Big Picture
    Parsing typically involves these phases:
    Input validation - are the arguments in the right format ?
    Conversion - turn strings into integers
    Duplicate checking - ensure no repeated values
    Stack building - create your initial stack A*/
    int i;
    int j;
    long num;
    char    **splitted_args;

    if (argc < 2)
        return ;
    i = 1;
    while (i < argc)
    {
        splitted_args = ft_split(argv[i], ' ');
        j = 0;
        while (splitted_args[j])
        {
            if (ft_isnum == 0)
            {
                write(2, "Error\n", 6);
                exit (1);
            }
            num = ft_atol(splitted_args[j]);
            // TODO: After conversion, what checks remain?
            if (num > INT_MAX || num < INT_MIN)
            {
                write(2, "Error\n", 6);
                exit (1);
            }
            
            // TODO: If everything passes, what do you do with the number?
            // Hint: Add to stack
            ft_lstadd_back(head, ft_lstnew((int)num));
            j++;
        }
        
        // Step 3: Clean up - what needs to be freed?
        
        i++;
    }
}