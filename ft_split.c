/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:59:54 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/21 19:09:32 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_wordcounter(const char *s, char c);
static size_t	ft_strlen(const char *s);
static char		*ft_strdup(const char *s, size_t begin, size_t end);

char	**ft_split(const char *s, char c)
{
	int		word_pos;
	char	**newstr;
	size_t	counter;
	size_t	split_pos;

	newstr = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (s == NULL || newstr == NULL)
		return (NULL);
	counter = 0;
	word_pos = -1;
	split_pos = 0;
	while (counter <= ft_strlen(s))
	{
		if (*(s + counter) != c && word_pos < 0)
			word_pos = counter;
		else if ((*(s + counter) == c || counter == ft_strlen(s))
			&& word_pos >= 0)
		{
			*(newstr + split_pos++) = ft_strdup(s, word_pos, counter);
			word_pos = -1;
		}
		counter++;
	}
	*(newstr + split_pos) = NULL;
	return (newstr);
}

static size_t	ft_wordcounter(const char *s, char c)
{
	size_t	counter;
	size_t	words;
	int		flag;

	counter = 0;
	words = 0;
	flag = 0;
	while (*(s + counter) != '\0')
	{
		if (*(s + counter) == c)
			flag = 0;
		else if (*(s + counter) != c && flag == 0)
		{
			flag = 1;
			words++;
		}
		counter++;
	}
	return (words);
}

static size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}

static char	*ft_strdup(const char *s, size_t begin, size_t end)
{
	size_t	counter_begin;
	size_t	counter;
	char	*newstr;

	counter_begin = begin;
	counter = 0;
	newstr = (char *)malloc(sizeof(char) * (end - begin + 1));
	while (counter_begin < end)
	{
		*(newstr + counter) = *(s + counter_begin);
		counter++;
		counter_begin++;
	}
	*(newstr + counter) = '\0';
	return (newstr);
}
