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
	size_t len;
	
	i = 0;
	len = 0;
	
	while (dest[len] && len < dstsize)
		len++;
	i = len;
	while (src[len - i] && (len + 1) < dstsize)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < dstsize)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[] = "My name is Mario";
	char src[] = ", Super Mario";
	int n = 7; 

	printf("original strncat = %s\n", strlcat(dst, src, n));
//	printf("mine strncat = %s\n", ft_strlcat(dst, src, n));	
	return (0);
}*/
