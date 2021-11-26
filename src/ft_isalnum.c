/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:33:55 by stelie            #+#    #+#             */
/*   Updated: 2021/11/26 18:32:56 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isalnum(int c)
{
	if (ft_isdigit(c))
		return (TRUE);
	else if (ft_isalpha(c))
		return (TRUE);
	return (FALSE);
}
