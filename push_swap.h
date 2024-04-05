/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:21:05 by btomlins          #+#    #+#             */
/*   Updated: 2024/04/05 14:46:58 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include "../libft/libft.h"
#include "../libft/ft_printf.h"

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
int     error_syntax(char   *str_n);
int     error_duplicate(t_stack_node    *a, int n);
void    free_stack(t_stack_node **stack);
void    free_errors(t_stack_node    **a)

// Linked-list init
void    init_stack_a(t_stack_node   **a, char   **argv);
char    **split(char    *s, char    c);

// Nodes init

// Stack utils

// Commands

// Algorthims

#endif
