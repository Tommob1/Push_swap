/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:37:43 by btomlins          #+#    #+#             */
/*   Updated: 2024/03/01 14:08:48 by btomlins         ###   ########.fr       */
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
    while (s[cursor] == c)
        ++cursor;
    while ((s[cursor + len] != c) && s[cursor + len])
        ++len;
    next_word = malloc((size_t)len * sizeof(char) + 1);
    if (!next_word)
        return(NULL);
    while ((s[cursor] != c) && s[cursor])
        next_word[i++] = s[cursor++];
    next_word[i] = '\0';
    return (next_word);
}

char    **split(char *s, char c)
{
    int     word_count;
    char    **result_array;
    int     i;

    i = 0;
    word_count = count_words(s, c);
    if (!word_count)
        exit(1);
    result_array = malloc(sizeof(char *) * (size_t)(word_count + 2));
    if (!result_array)
        return (NULL);
    while (word_count-- >= 0)
    {
        if (i == 0)
        {
            result_array[i] = malloc(sizeof(char));
            if (!result_array[i])
                return NULL;
            result_array[i++][0] = '\0';
            continue;
        }
        result_array[i++] = get_next_word(s, c);
    }
    result_array[i] = NULL;
    return (result_array);
}
