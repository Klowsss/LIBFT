/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:46:56 by btiza             #+#    #+#             */
/*   Updated: 2023/10/15 17:09:27 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		*(unsigned char *)(p + i) = (unsigned char)value;
		i++;
	}
	return (p);
}
