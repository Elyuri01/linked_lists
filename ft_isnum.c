#include "tmp.h"

int ft_isnum(char *str)
{
    int i;

    i = 0;
    if (!str || str[i] == '\0')
        return (0);
    if (str[i] == '+' || str[i] == '-')
        i++;
    if (str[i] == '\0')
        return (0);
    while (str[i] >= '0' && str[i] <= '9')
            i++;
    if (str[i] && !(str[i] >= '0' && str[i] <= '9'))
        return (0); 
    return (1);
}