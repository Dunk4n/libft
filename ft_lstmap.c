/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:40:41 by niduches          #+#    #+#             */
/*   Updated: 2019/10/11 18:54:28 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (NULL);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

static void		ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*end;

	if (!alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	end = ft_list_last(*alst);
	if (!end)
		return ;
	end->next = new;
}

t_list			*ft_lstmap(t_list *lst, void *(f)(void *))
{
	t_list	*new;
	t_list	*tmp;

	while (lst)
	{
		tmp = malloc(sizeof(t_list));
		if (!tmp)
			return (NULL);
		tmp->content = f(lst->content);
		tmp->next = NULL;
		ft_lstaddback(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
