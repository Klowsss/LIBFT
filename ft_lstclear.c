/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:31:50 by btiza             #+#    #+#             */
/*   Updated: 2023/10/15 21:59:39 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*nextt;

	current = *lst;
	while (current != NULL)
	{
		del(current->content);
		nextt = current->next;
		free(current);
		current = nextt;
	}
	*lst = NULL;
}
