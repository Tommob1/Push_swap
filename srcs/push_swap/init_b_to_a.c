/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:11:53 by btomlins          #+#    #+#             */
/*   Updated: 2024/04/19 16:26:40 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void set_target_b(t_stack_node *a, t_stack_node *b)
{
    t_stack_node    *current_a;
    t_stack_node    *target_node;
    long            best_match_index;

    while (b)
    {
        best_match_index = LONG_MAX;
        current_a = a;
        while(current_a)
        {
            if (current_a->nbr > b->nbr
                    && current_a->nbr < best_match_index)
                {
                    best_match_index = current_a->nbr;
                    target_node = current_a;
                }
                current_a = current_a->next;
        }
        if (best_match_index == LONG_MAX)
            b->target_node = find_min(a);
        else
            b->target_node = target_node;
        b = b->next;
    }
}

void    init_nodes_b(t_stack_node *a, t_stack_node *b)
{
    current_index(a);
    current_index(b);
    set_target_b(a, b);
}