/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:41:42 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/20 19:41:46 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    while (src != '\0' && (i < size-1))
    {
        dst[i] = srt[i];
        i++;
    }
    return (ft_strlen(src)) 
}