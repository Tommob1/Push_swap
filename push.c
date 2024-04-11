/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:28:11 by btomlins          #+#    #+#             */
/*   Updated: 2024/04/11 16:05:50 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void push(t_stack_node **dst, t_stack_node **src)
{
    t_stack_node    *push_node;

    if (!*src)
        return ;
    push_node = *src;
    *src = (*src)->next;
    if (*src)
        (*src)->prev = NULL;
    push_node->prev = NULL;
    if(!*dst)
    {
        *dst = push_node;
        push_node->next = NULL;
    }
    else
    {
        push_node->next = *dst;
        push_node->next->prev = push_node;
        *dst = push_node;
    }
}

void    pa(t_stack_node **a, t_stack_node **b, bool print)
{

}

void    pb(t_stack_node **b, t_stack_node **a, bool print)
{
    
}