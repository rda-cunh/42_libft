/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:57:10 by rmendes           #+#    #+#             */
/*   Updated: 2023/10/30 18:28:04 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n && *s1 && (*s1 == *s2))
    {
        ++s1;
        ++s2;
        --n;
    }
    if ( n == 0 )
    {
        return 0;
    }
    else
    {
        return ( *(unsigned char *)s1 - *(unsigned char *)s2 );
    }
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
