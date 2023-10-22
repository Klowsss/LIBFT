/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:26:57 by btiza             #+#    #+#             */
/*   Updated: 2023/10/14 19:46:49 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ts1;
	int		ts2;
	char	*total_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ts1 = ft_strlen(s1);
	ts2 = ft_strlen(s2);
	total_len = malloc(sizeof(char) * ((ts1 + ts2) + 1));
	if (!total_len)
		return (NULL);
	while (s1[i] != '\0')
	{
		total_len[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		total_len[i++] = s2[j++];
	total_len[i] = '\0';
	return (total_len);
}
