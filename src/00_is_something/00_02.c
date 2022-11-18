/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_02.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:15:21 by krozis            #+#    #+#             */
/*   Updated: 2022/11/18 10:41:37 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (true);
	return (false);
}

bool	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (true);
	return (false);
}
