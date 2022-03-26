/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:58:14 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/26 17:35:56 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*tmp_src = src;
	unsigned char		*tmp_dest;

	tmp_dest = dest;
	while (n--)
		*tmp_dest++ = *tmp_src++;
	return (tmp_dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*tmp_src = src;
	unsigned char		*tmp_dest;

	tmp_dest = dest;
	if (tmp_src < tmp_dest)
	{
		tmp_src += n;
		tmp_dest += n;
		while (n--)
			*--tmp_dest = *--tmp_src;
	}
	else
		ft_memcpy(dest, src, n);
	return (tmp_dest);
}
