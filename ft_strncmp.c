/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:27:55 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/31 02:43:47 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	size_t			counter;

	counter = 0;
	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	while (counter < n
		&& *(tmp_s1 + counter) != '\0' && *(tmp_s2 + counter) != '\0')
	{
		if (*(tmp_s1 + counter) != *(tmp_s2 + counter))
			return (*(tmp_s1 + counter) - *(tmp_s2 + counter));
		counter++;
	}
	if (counter == n)
		return (0);
	return (*(tmp_s1 + counter) - *(tmp_s2 + counter));
}
