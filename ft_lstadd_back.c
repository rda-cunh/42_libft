/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:25:27 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/11/15 18:47:32 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;
	
	if (new == NULL)
		return ;
	last_node = (t_list *)malloc(sizeof(t_list));
		if (!node)
			return (NULL);
	last_node -> content = new;
	last_node -> next = NULL;
	while (lst -> next)
	{
		lst -> next = last_node;
	}
	
}