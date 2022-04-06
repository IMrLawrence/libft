/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:33:23 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/06 15:57:46 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	size_t	counter;
	char	*new_string;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	new_string = (char *)malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (new_string == NULL)
		return (NULL);
	counter = 0;
	while (counter < s1_size)
	{
		*(new_string + counter) = *(s1 + counter);
		counter++;
	}
	while (counter < (s1_size + s2_size))
	{
		*(new_string + counter) = *(s2 + (counter - s1_size));
		counter++;
	}
	*(new_string + counter) = '\0';
	return (new_string);
}

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
