/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 00:01:10 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/29 00:38:36 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (counter < (size - 1) && *(src + counter) != '\0')
	{
		*(dst + counter) = *(src + counter);
		counter++;
	}
	*(dst + counter) = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
