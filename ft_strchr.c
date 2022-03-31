/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:11:58 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/31 02:24:38 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		if (*(s + counter) == (char) c)
			return ((char *)s + counter);
		counter++;
	}
	if (*(s + counter) == (char) c)
		return ((char *)s + counter);
	return (NULL);
}
