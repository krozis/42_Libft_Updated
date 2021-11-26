/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_int_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:23:22 by stelie            #+#    #+#             */
/*   Updated: 2021/11/26 17:11:08 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_value(char c)
{
	if (ft_isdigit(c))
		return (c - '0');
	return (ft_toupper(c) - 55);
}

int	ft_hex_to_int_dec(char *hex)
{
	int		nbr;
	int		mult;
	size_t	len;

	nbr = 0;
	mult = 0;
	len = ft_strlen(hex);
	while (len > 0)
	{
		len--;
		nbr = nbr + (get_value(hex[len]) * ft_power(mult, 16));
		mult++;
	}
	return (nbr);
}
