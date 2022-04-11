/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:33:55 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/11 13:35:56 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	s_size;

	s_size = 0;
	while (*(s + s_size) != '\0')
		s_size++;
	write(fd, s, s_size);
}
