/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:22:50 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/13 15:21:42 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_intsize(int n);
static char		ft_getchar(int n, size_t pos, size_t size);

char	*ft_itoa(int n)
{
	char	*new_string;
	size_t	n_size;
	size_t	counter;

	n_size = ft_intsize(n);
	counter = n_size;
	new_string = (char *)malloc(sizeof (char) * (n_size + 1));
	*(new_string + counter) = '\0';
	while (counter-- > 0)
	{
		*(new_string + counter) = ft_getchar(n, counter, n_size);
	}
	return (new_string);
}

static size_t	ft_intsize(int n)
{
	size_t	n_size;

	n_size = 1;
	if (n < 0)
		n_size++;
	while (n / 10)
	{
		n /= 10;
		n_size++;
	}
	return (n_size);
}

static char	ft_getchar(int n, size_t pos, size_t size)
{
	int	unit;

	if (n < 0 && pos == 0)
		return ('-');
	while (--size > pos)
		n /= 10;
	unit = n % 10;
	if (unit < 0)
		unit *= -1;
	return (unit + '0');
}
