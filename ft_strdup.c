/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes <rmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:53:36 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/01 23:39:09 by rmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*s1;

	size = ft_strlen(s) + 1;
	s1 = malloc(size);
	if (s1 == NULL)
		return (NULL);
	ft_memcpy(s1, s, size);
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s[] = "teste";
		
	printf("s1: %s\n", ft_strdup(s));
	return (0);
}*/