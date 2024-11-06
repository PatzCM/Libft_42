/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palexand <palexand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:23:16 by palexand          #+#    #+#             */
/*   Updated: 2024/11/06 17:23:16 by palexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp;
	t_list	*node_content;

	tmp = lst;
	if (tmp == NULL)
		return (NULL);
	while (tmp)
	{
		node_content = (f)(tmp->content);
		new_list = ft_lstnew(node_content);
		tmp = tmp->next;
	}
		ft_lstclear(&lst, del);	
	return (new_list);	
}

