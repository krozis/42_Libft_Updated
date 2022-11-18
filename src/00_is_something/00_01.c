/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:20:59 by stelie            #+#    #+#             */
/*   Updated: 2022/11/18 10:42:08 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool	ft_ishexa(char *nbr)
{
	while (*nbr)
	{
		if (ft_incharset(ft_ctoupper(*nbr), HEXA_UP) == false)
			return (false);
		nbr++;
	}
	return (true);
}

bool	ft_isoctal(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '7'))
			return (false);
		str++;
	}
	return (true);
}

bool	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (true);
	return (false);
}

bool	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (true);
	return (false);
}
