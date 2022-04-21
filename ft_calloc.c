/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:35:38 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/21 19:59:35 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if ((nmemb * size) == (SIZE_MAX * SIZE_MAX))
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem != NULL)
		ft_bzero(mem, nmemb * size);
	return (mem);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
		*((unsigned char *)s + counter++) = 0;
}
