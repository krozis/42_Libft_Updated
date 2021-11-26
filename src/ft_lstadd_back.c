/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:16:09 by stelie            #+#    #+#             */
/*   Updated: 2021/11/26 16:29:44 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*start;

	new->next = NULL;
	if (*alst == NULL)
		*alst = new;
	else
	{
		start = *alst;
		while (start->next != NULL)
			start = start->next;
		start->next = new;
	}
}
