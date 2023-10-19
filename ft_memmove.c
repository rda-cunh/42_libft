/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:34:34 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/19 19:43:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;
	char	*temp;

	i = 0;
	d = (char *)dst;
	s = (char *)src;

	if (!dst && !src)
		return (dst);

	temp = malloc(len);

	while (i < len)
        {
                temp[i] = s[i];
                i++;
        }
	i = 0;
	while (i < len)
	{
		d[i] = temp[i];
		i++;
	}
	free(temp);
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char	src[] = "Test string.";
	char	dst1[50];
	char	dst2[50];

	ft_memmove(dst1, src, strlen(src) + 1);
	memmove(dst2, src, strlen(src) + 1);

	printf("Source string: %s\n", src);
	printf("Destiny string using ft_memmove: %s\n", dst1);
	printf("Destiny string using memmove: %s\n", dst2);
	return(0);
}*/
