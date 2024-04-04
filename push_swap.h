/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:21:05 by btomlins          #+#    #+#             */
/*   Updated: 2024/04/04 14:37:43 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// Linked-list init

// Nodes init

// Stack utils

// Commands

// Algorthims

#endif
