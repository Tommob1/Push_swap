/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:50:53 by btomlins          #+#    #+#             */
/*   Updated: 2024/04/04 14:22:54 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(t_stack_node **stack)
{
    t_stack_node    *last_node;

    if(!*stack || !(*stack)->next)
        return ;
    last_node = find_last(*stack);
}