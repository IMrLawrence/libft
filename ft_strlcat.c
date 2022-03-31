/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 01:21:08 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/31 01:57:33 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strnlen(const char *s, size_t max_bytes);
static size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	end_dst;

	end_dst = ft_strnlen(dst, size);
	if (end_dst == size || size == 0)
		return (size + ft_strlen(src));
	counter = 0;
	while ((counter + end_dst) < (size - 1) && *(src + counter) != '\0')
	{
		*(dst + end_dst + counter) = *(src + counter);
		counter++;
	}
	*(dst + end_dst + counter) = '\0';
	return (end_dst + ft_strlen(src));
}

static size_t	ft_strnlen(const char *s, size_t max_bytes)
{
	size_t	counter;

	counter = 0;
	while (*(s + counter) != '\0' && counter < max_bytes)
		counter++;
	return (counter);
}

static size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
