/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:22:24 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/28 21:33:34 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	size_t			counter;

	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	counter = 0;
	while (counter < n)
	{
		if (*(tmp_s1 + counter) != *(tmp_s2 + counter))
			return (*(tmp_s1 + counter) - *(tmp_s2 + counter));
		counter++;
	}
	return (0);
}
