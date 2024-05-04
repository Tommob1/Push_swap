/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:00:47 by btomlins          #+#    #+#             */
/*   Updated: 2024/05/04 14:32:54 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the last node of the list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*elem;

	if (lst == 0)
		return (0);
	elem = lst;
	while (elem->next != 0)
		elem = elem->next;
	return (elem);
}
