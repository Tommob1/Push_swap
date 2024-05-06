/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:44:09 by btomlins          #+#    #+#             */
/*   Updated: 2024/05/06 16:53:53 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rotate_both(t_stack_node **a, t_stack_node **b,
t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
	{
		rr(a, b, false);
	}
	current_index(*a);
	current_index(*b);
}

void	rev_rotate_both(t_stack_node **a, t_stack_node **b,
t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
	{
		rrr(a, b, false);
	}
	current_index(*a);
	current_index(*b);
}
