/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:12:45 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/28 20:59:29 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	unsigned char	tmp_c;
	size_t			counter;

	tmp_s = (unsigned char *)s;
	tmp_c = c;
	counter = 0;
	while (counter < n)
	{
		if (*(tmp_s + counter) == tmp_c)
			return (tmp_s + counter);
		counter++;
	}
	return (NULL);
}
