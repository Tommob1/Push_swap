/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:50:53 by btomlins          #+#    #+#             */
/*   Updated: 2024/04/04 15:34:43 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(t_stack_node **stack)
{
    t_stack_node    *last_node;

    if(!*stack || !(*stack)->next)
        return ;
	last_node = find_last(*stack); 
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_stack_node	**a, bool	print)
{

}

void	rb(t_stack_node	**b, bool	print)
{

}

void	rr(t_stack_node	**a, t_stack_node	**b, bool	print)
{
	
}