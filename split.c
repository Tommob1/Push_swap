/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:06:32 by btomlins          #+#    #+#             */
/*   Updated: 2024/02/20 16:06:32 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  count_words(char *s, char c)
{
    int count;
    int inside_word;

    count = 0;
    while (*s)
    {
        inside_word = false;
        while (*s == c)
            ++s;
        while (*s != c && *s)
        {
            if (!inside_word)
            {
                ++count;
                inside_word = true;
            }
            ++s;
        }
    }
    return (count);
}

static char *get_next_word(char *s, char *c)
{
    static int  cursor;
    char         *next_word;
    int         len;
    int         i;

    cursor = 0;
    len = 0;
    i = 0;
}