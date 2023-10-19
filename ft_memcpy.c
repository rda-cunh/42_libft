/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:34:34 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/17 19:38:05 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);	
}

#include(stdio.h)

int main(void)
{
	char	src1[] = "Test string.";
	char	dst1[12];

	char	src2[] = "Test string.";
	char	dst2[12];

	printf("Destiny string using ft_memcpy: %s\n", ft_memcpy(dst1, src1, 12));
    printf("Destiny string using memcpy: %s\n", memcpy(dst2, src2, 12));
	return (0);
}
