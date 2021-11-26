/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:47:25 by stelie            #+#    #+#             */
/*   Updated: 2021/11/26 17:02:36 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	hexa_char(char c)
{
	if (ft_isdigit(c))
		return (TRUE);
	if (c >= 'A' && c <= 'F')
		return (TRUE);
	return (FALSE);
}

t_bool	ft_ishexa(char *nbr)
{
	while (*nbr)
	{
		if (hexa_char(ft_toupper(*nbr)) == FALSE)
			return (FALSE);
		nbr++;
	}
	return (TRUE);
}
