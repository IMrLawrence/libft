/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:26:22 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/06 15:26:22 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	s_size;
	size_t	counter;

	s_size = 0;
	while (*(s + s_size) != '\0')
		s_size++;
	if (s_size < len)
		len = s_size;
	if (s_size < start)
		len = 0;
	if ((s_size - start) < len)
		len -= start;
	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string == NULL)
		return (NULL);
	counter = 0;
	while (counter < len && (start + counter) < s_size)
	{
		*(new_string + counter) = *(s + start + counter);
		counter++;
	}
	*(new_string + counter) = '\0';
	return (new_string);
}
