/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:10:15 by emustafi          #+#    #+#             */
/*   Updated: 2025/03/12 16:10:15 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strnew(size_t size)
{
    char    *str;
    size_t  i;

    i = 0;
    str = (char *)malloc(size + 1);
    if (!str)
        return (NULL);
    while (i <= size)
    {
        str[i] = '\0';
        i++;
    }
    return(str);
}
