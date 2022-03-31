/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:59:58 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/31 15:13:48 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	counter;
	size_t	i_counter;

	counter = 0;
	if (*little == '\0')
		return ((char *)big);
	while (counter < len && *(big + counter) != '\0')
	{
		i_counter = 0;
		while (*(big + counter + i_counter) == *(little + i_counter)
			&& *(little + i_counter) != '\0')
			i_counter++;
		if (*(little + i_counter) == '\0'
			&& (counter + i_counter) <= len)
			return ((char *)big + counter);
		counter++;
	}
	return (NULL);
}
