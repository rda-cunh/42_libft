/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendes <rmendes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:46:04 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/06 00:34:57 by rmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	wordcount;
	int	i;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c || s[i + 1] == '\0'))
			wordcount++;
		i++;
	}
	return (wordcount);
}

void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab1;
	char const	*tmp;
	
	tmp = s;
	tab1 = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab1 = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab1;
		}
	}
	*tab1 = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		size;
	
	if (!s)
		return (NULL); 
	size = ft_word_count(s, c);
	str = (char **)malloc (sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_allocate(str, s, c);
	return (str);
}
/*
#include <stdio.h>

int	main(void);
{
	char	s[] = "Lorem ipsum dolor sit amet";
	char	c = " ";
	i = 0;

	while (i < 5)
	{
		printf("%s\n", ft_split(s, c));
		i++;
	}
	return (0);
}*/