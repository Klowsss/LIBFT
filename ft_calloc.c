/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:49:50 by btiza             #+#    #+#             */
/*   Updated: 2023/10/11 18:21:33 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*total_size;

	total_size = malloc(size * nmemb);
	if (!total_size)
		return (NULL);
	ft_bzero(total_size, size * nmemb);
	return (total_size);
}
