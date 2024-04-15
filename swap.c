/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:24:08 by btomlins          #+#    #+#             */
/*   Updated: 2024/04/15 16:26:53 by btomlins         ###   ########.fr       */
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

