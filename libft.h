/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:54:20 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/16 19:22:40 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
//don't forget to verify at the end that all the needed libraries are here//

//LIBC FUNCTIONS//
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, unsigned int len);

//ADITIONAL FUNCTIONS//

//BONUS FUNCTIONS//
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
