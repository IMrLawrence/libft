/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:34:27 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/24 15:37:44 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			counter;

	counter = 0;
	while (counter < n)
	{
		tmp = s;
		*(tmp + counter) = c;
		counter++;
	}
	return (tmp);
}
