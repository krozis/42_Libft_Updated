/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:18:34 by stelie            #+#    #+#             */
/*   Updated: 2022/11/18 10:42:44 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_incharset(char c, const char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (true);
		charset++;
	}
	return (false);
}

bool	ft_isalnum(int c)
{
	if (ft_isdigit(c))
		return (true);
	else if (ft_isalpha(c))
		return (true);
	return (false);
}

bool	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (true);
	return (false);
}

bool	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (true);
	return (false);
}

bool	ft_isbinary(char *str)
{
	while (*str)
	{
		if (!(*str == '0' || *str == '1'))
			return (false);
		str++;
	}
	return (true);
}
