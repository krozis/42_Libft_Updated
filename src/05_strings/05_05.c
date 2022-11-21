/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_05.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stelie <stelie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:36:30 by stelie            #+#    #+#             */
/*   Updated: 2022/11/21 10:46:29 by stelie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * FT_STR_ARR_DUP
*/

size_t	ft_str_arr_len(char **array)
{
	size_t	len;

	len = 0;
	while (array && array[len])
		len++;
	return (len);
}

char	ft_str_arr_dup(char	**array)
{
	char	**copy;
	int		i;

	if (array == NULL)
		return (NULL);
	copy = ft_calloc(ft_str_arr_len(array) + 1, sizeof(*copy));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (array[i])
	{
		copy[i] = ft_strdup(array[i]);
		i++;
	}
	return (copy);
}
