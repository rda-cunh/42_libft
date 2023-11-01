/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes <rmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:31:28 by rmendes           #+#    #+#             */
/*   Updated: 2023/10/31 23:39:04 by rmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	char	*big2;
	char	*little2;
	size_t	i;
	size_t	j;
	
	big2 = (char *)big;
	little2 = (char *)little;
	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i < len && i + )

	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "My name is Mario";
	char to_find[] = "is";

//	printf("strstr = %s\n", strstr(str, to_find));
	printf("ft_strstr = %s\n", ft_strstr(str, to_find));	
	return (0);
}*/