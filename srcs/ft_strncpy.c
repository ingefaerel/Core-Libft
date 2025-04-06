/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:02:20 by emustafi          #+#    #+#             */
/*   Updated: 2025/04/06 17:00:05 by emustafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dst, const char *src, size_t sz)
{
	size_t	i;

	i = 0;
	while (i < sz && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < sz)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
