/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:02:11 by btomlins          #+#    #+#             */
/*   Updated: 2024/02/22 17:12:07 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long ft_atol(const char *s)
{
    long    result;
    int     sign;

    result = 0;
    sign = 1;
    while (*s == ' ' || *s == '\t' || *s == '\n' || \
            *s == '\r' || *s == '\f' || *s == '\v')
        s++;
    if (*s == '-' || *s == '+')
    {
        if (*s == '-')
            sign = -1;
        s++;
    }
    while (ft_isdigit(*s))
        result = result * 10 + (*s++ - '0');
    return (result * sign);
}

static void append_node(t_stack_node **stack, int n)
{
    t_stack_node    *node;
    t_stack_node    *last_node;

    if (!stack)
        return;
    node = malloc(sizeof(t_stack_node));
    if (!node)
        return;
    node->next = NULL;
    node->nbr = n;
    if (!(*stack))
    {
        *stack = node;
        node->prev = NULL;
    }
    else
    {
        last_node = find_last(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}