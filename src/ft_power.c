/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:05:16 by stelie            #+#    #+#             */
/*   Updated: 2021/11/26 17:09:51 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int power, int nbr)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nbr);
	return (nbr * ft_power(power - 1, nbr));
}
