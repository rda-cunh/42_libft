/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:13:25 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/16 19:23:09 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{

	unsigned char *p = s;

	while (len--) 
	{
		*p++ = (unsigned char)c;
	}	
	return s; 
}
/*
#include <stdio.h>
{
	char dest[] = "hello World";
	int c = '$';
	size_t len = 5;


	printf("My function before = %s\n",dest);
	printf("My function gives = %s\n", ft_memset(dest, c, len);

	chat dest[t] = "Hello World";

	printf("Original function before = %s\n", dest);	
	printf("Original function gives = %s\n", strn(s, c, );
	return (0);
}*/
