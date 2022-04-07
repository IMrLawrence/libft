/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:30:01 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/07 09:13:10 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_isset(const char c, const char *set);
size_t	ft_strtrimsize(const char *s1, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start_position;
	size_t	counter;
	size_t	new_string_size;
	char	*new_string;

	start_position = 0;
	while (ft_isset(*(s1 + start_position), set))
		start_position++;
	new_string_size = ft_strtrimsize(s1, set);
	new_string = (char *)malloc(sizeof(char) * new_string_size + 1);
	if (new_string == NULL)
		return (NULL);
	counter = 0;
	while (counter < new_string_size)
	{
		*(new_string + counter) = *(s1 + start_position + counter);
		counter++;
	}
	*(new_string + counter) = '\0';
	return (new_string);
}

int	ft_isset(const char c, const char *set)
{
	size_t	counter;

	counter = 0;
	while (*(set + counter) != '\0')
	{
		if (*(set + counter) == c)
			return (1);
		counter++;
	}
	return (0);
}

size_t	ft_strtrimsize(const char *s1, const char *set)
{
	size_t	start_counter;
	size_t	end_counter;
	size_t	s1_size;

	s1_size = 0;
	while (*(s1 + s1_size) != '\0')
		s1_size++;
	start_counter = 0;
	while (ft_isset(*(s1 + start_counter), set))
		start_counter++;
	if (s1_size <= start_counter)
		return (0);
	end_counter = s1_size - 1;
	while (ft_isset(*(s1 + end_counter), set))
		end_counter--;
	return (s1_size - start_counter - (s1_size - end_counter) + 1);
}
