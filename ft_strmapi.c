/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:52:37 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/11 16:13:24 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	counter;
	size_t	s_size;

	s_size = 0;
	while (*(s + s_size) != '\0')
		s_size++;
	new_string = (char *)malloc(sizeof (char) * (s_size + 1));
	if (new_string == NULL)
		return (NULL);
	counter = 0;
	while (counter < s_size)
	{
		*(new_string + counter) = (*f)(counter, *(s + counter));
		counter++;
	}
	*(new_string + counter) = '\0';
	return (new_string);
}
