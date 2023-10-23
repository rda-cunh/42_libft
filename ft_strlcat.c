/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:42:21 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/23 18:59:27 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t last_elem;
	size_t dst_len;
	
	i = 0;
	last_elem = dstsize -1;
	dst_len = ft_strlen(dst);
	
	if (dstsize > 0)
	{
		while (src[i] && (i < last_elem))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		if (i == last_elem)
		{
			dst[dst_len + i] = '\0';
		}
		else 
		{
			dst[i -1] = '\0';
		}
	}
	return (ft_strlen(src));
}