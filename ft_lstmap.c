/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsoares- <wsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 07:10:16 by wsoares-          #+#    #+#             */
/*   Updated: 2022/04/19 16:46:19 by wsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*aux;
	t_list	*tmp;

	newlst = NULL;
	while (lst != NULL)
	{
		aux = (t_list *)malloc(sizeof (t_list));
		aux->content = (*f)(lst->content);
		aux->next = NULL;
		if (aux == NULL)
			ft_lstclear(&newlst, del);
		if (newlst == NULL)
			newlst = aux;
		else
		{
			tmp = newlst;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = aux;
		}
		lst = lst->next;
	}
	return (newlst);
}
