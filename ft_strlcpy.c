/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:41:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/20 19:41:46 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && (i < (size - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*#include <stdio.h>

int	main(void)
{
	char src[] = "Where's Wally";
	char dst[] = "Alice in Wonderland";
	size_t	size = 13;

	printf("src string: %s\nsrc tring size:%ld\ndst string: %s\n", src,
	 ft_strlcpy(dst, src, size), dst);
	return (0);
}*/
