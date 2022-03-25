/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:39:43 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/25 00:54:20 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*tmp_src;
	unsigned char		*tmp_dest;
	size_t				counter;

	tmp_dest = dest;
	tmp_src = src;
	counter = 0;
	while (counter < n)
	{
		*(tmp_dest + counter) = *(tmp_src + counter);
		counter++;
	}
	return (tmp_dest);
}
