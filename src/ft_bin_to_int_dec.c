/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bin_to_int_dec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:24:50 by stelie            #+#    #+#             */
/*   Updated: 2021/11/26 17:37:31 by stelie           ###   ########.fr       */
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
