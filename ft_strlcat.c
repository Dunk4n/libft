/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 22:41:23 by niduches          #+#    #+#             */
/*   Updated: 2019/10/07 17:04:51 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	while (dst[i])
		i++;
	len = i;
	j = 0;
	while (size > 0 && i < size - 1 && src[j])
		dst[i++] = src[j++];
	if (size > 0)
		dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	if (size < len)
		return (i + size);
	return (i + len);
}
