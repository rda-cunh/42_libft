/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:29:19 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/30 19:01:44 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char *p = (unsigned char *)b;

	while (p != '\0' && len--)
	{
		if  (*p != (unsigned char)c)
			p++;
		else 
			return (0);
	} 
	return (0);
}
#include <stdio.h>

int main(void)
{
        char s1[] = "abcdef";
        int c = c; 
		size_t len = 6;
	
	printf("my function = %d\n", ft_memchr(s1, c, len));   
	printf("original function = %d\n", strncmp(s1, c, len));     
    return (0);
}