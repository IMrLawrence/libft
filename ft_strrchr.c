/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:44:28 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/31 13:53:23 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	counter;
	int		last_occur;

	counter = 0;
	last_occur = -1;
	while (*(s + counter) != '\0')
	{
		if (*(s + counter) == (char) c)
			last_occur = counter;
		counter++;
	}
	if (*(s + counter) == (char) c)
		last_occur = counter;
	if (last_occur != -1)
		return ((char *)s + last_occur);
	return (NULL);
}
