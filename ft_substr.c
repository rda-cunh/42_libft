/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes <rmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:22:22 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/02 10:15:27 by rmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	sub = (char *)malloc(len + 1);
	while (s[i] && i < start - 1)
		i++;
	while (j < len)
	{
		sub[j] = s[i];
		j++;
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char				s[] = "Hello World";
	unsigned int		start = 7;
	size_t				len = 6; 

	printf("substr: %s\n", ft_substr(s, start, len));
	return (0);	
}*/