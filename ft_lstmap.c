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

t_list	*ft_lstmap(t_list *lst, void *(f)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	if (!(tmp = ft_lstnew(f(lst->content))))
		return (NULL);
	new = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = ft_lstnew(f(lst->content))))
			return (NULL);
		tmp = tmp->next;
	}
	return (new);
}
