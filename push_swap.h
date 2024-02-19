#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
//# include </libft/inc/libft.h>
//# include <../libft/inc/ft_printf.h>

typedef struct s_stack_node
{
    int                 nbr;
    int                 index;
    int                 push_cost;
    int                 above_median;
    int                 cheapest;

    struct s_stack_node *next;
    struct s_stack_node *prev;
    
}

#endif