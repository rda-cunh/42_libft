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
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);	
}

/*int main()
{
	char	str[] = "Foste mesmo copiado.";
	char	dest[18];
	ft_putstr_fd(ft_memcpy(dest, str, 18), 1);
	ft_putchar_fd('\n', 1);
}*/
