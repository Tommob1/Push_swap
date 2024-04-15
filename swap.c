/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:24:08 by btomlins          #+#    #+#             */
/*   Updated: 2024/04/15 16:29:39 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(t_stack_node **head)
{
    if (!*head || !(*head)->next)
        return ;
    *head = (*head)->next;
    (*head)->prev->prev = *head;
    (*head)->prev->next = (*head)->next;
    if ((*head)->next)
        (*head)->next->prev = (*head)->prev;
    (*head)->next = (*head)->prev;
    (*head)->prev = NULL;
}

void    sa(t_stack_node **a, bool print)
{
    swap(a);
    if (!print)
        ft_printf("sa\n");
}

void    sb(t_stack_node **b, bool print)
{
    swap(b);
    if (!print)
        ft_printf("sb\n");
}

void    ss(t_stack_node **a, t_stack_node **b, bool print)
{
    swap(a);
    swap(b);
    if (!print)
        ft_printf("ss\n");
}