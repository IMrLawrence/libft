/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:41:06 by wsoares-          #+#    #+#             */
/*   Updated: 2022/03/28 17:07:58 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_isdigit(int c);
static int	ft_isspace(int c);

int	ft_atoi(const char *nptr)
{
	size_t	counter;
	int		value;
	int		mod;

	counter = 0;
	value = 0;
	mod = 1;
	while (ft_isspace(*(nptr + counter)))
		counter++;
	if (*(nptr + counter) == '-' || *(nptr + counter) == '+')
	{
		if (*(nptr + counter) == '-')
			mod = -1;
		counter++;
	}
	while (ft_isdigit(*(nptr + counter)))
	{
		value += (*(nptr + counter++) - 48);
		if (ft_isdigit(*(nptr + counter)))
			value *= 10;
	}
	return (value * mod);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}
