/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:36:14 by btomlins          #+#    #+#             */
/*   Updated: 2024/03/01 12:42:54 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool    stack_sorted(t_stack_node   *stack)
{
    if (!stack)
        return (1);
    while (stack->next)
    {
        if (stack->nbr > stack->next->nbr)
            return (false);
        stack = stack->next;
    }
    return (true);
}

t_stack_node    *find_min(t_stack_node *stack)
{
    long            min;
    t_stack_node    *min_node;

    if (!stack)
        return (NULL);
    min = LONG_MAX;
    while (stack)
    {
        
    }
}