/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:00:38 by stelie            #+#    #+#             */
/*   Updated: 2022/04/19 20:43:38 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bin_to_int_dec(char *bin)
{
	int		nbr;
	int		mult;
	size_t	len;

	nbr = 0;
	mult = 0;
	len = ft_strlen(bin);
	while (len > 0)
	{
		len--;
		nbr = nbr + ((bin[len] - '0') * (ft_power(mult, 2)));
		mult++;
	}
	return (nbr);
}

int	ft_oct_to_int_dec(char *bin)
{
	int		nbr;
	int		mult;
	size_t	len;

	nbr = 0;
	mult = 0;
	len = ft_strlen(bin);
	while (len > 0)
	{
		len--;
		nbr = nbr + ((bin[len] - '0') * (ft_power(mult, 8)));
		mult++;
	}
	return (nbr);
}

static int	get_hex_val(char c)
{
	if (ft_isdigit(c))
		return (c - '0');
	return (ft_ctoupper(c) - 55);
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
		nbr = nbr + (get_hex_val(hex[len]) * ft_power(mult, 16));
		mult++;
	}
	return (nbr);
}
