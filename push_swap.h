#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <../libft/libft.h>
# include <../libft/ft_printf.h>

typedef struct s_stack_node
{
    int                 nbr;
    int                 index;
    int                 push_cost;
    bool                above_median;
    bool                cheapest;
    struct s_stack_node *target_node;
    struct s_stack_node *next;
    struct s_stack_node *prev;
    
}   t_stack_node;

// Error handlers

// Stack init

// Nodes init

// Stack utils

// Commands

// Algorthims

#endif