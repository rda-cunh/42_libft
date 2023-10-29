/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes <rmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:57:10 by rmendes           #+#    #+#             */
/*   Updated: 2023/10/29 14:19:11 by rmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n - 1)
	{
		if (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
        char s1[] = "abcdef";
        char s2[] = "abc\375xx";
	int n = 6;
	
	printf("my function = %d\n", ft_strncmp(s1, s2, n));   
	printf("original function = %d\n", strncmp(s1, s2, n));     
         return (0);
}
