/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:15:56 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/31 21:37:58 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	size_t	counter;
	size_t	s_size;
	char	*s_copy;

	s_size = ft_strlen(s) + 1;
	s_copy = (char *)malloc(sizeof(char) * s_size);
	counter = 0;
	if (s_copy == NULL)
		return (NULL);
	while (counter < s_size)
	{
		*(s_copy + counter) = *(s + counter);
		counter++;
	}
	return (s_copy);
}

static size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
