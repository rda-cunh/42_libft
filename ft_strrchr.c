/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes <rmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:39:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/29 13:47:12 by rmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	size_t	i;

	altc = c;
	alts = (char *)s;
	i = ft_strlen(alts);
	if (altc == 0)
		return (alts + i);
	while (i != 0)
	{
		if (alts[i] == altc)
			return (alts + i);
		i--;
	}
	if (s[0] == altc)
		return (alts);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Vai ser um teste";
	char c = 'V';

	printf("My function: %s\n", ft_strrchr(str, c));
	printf("My function: %s\n", strrchr(str, c));
}*/
