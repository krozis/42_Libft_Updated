/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_04.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krozis <krozis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:02:15 by stelie            #+#    #+#             */
/*   Updated: 2022/04/27 15:23:38 by krozis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ctolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_ctoupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_str_cut_before(char *src, char c)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] && src[i] != c)
		i++;
	dest = malloc(sizeof(char) * (i));
	if (dest == NULL)
		return (NULL);
	dest[i] = '\0';
	while (--i >= 0)
		dest[i] = src[i];
	return (dest);
}

char	*ft_str_cut_after(char *src, char c)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] && src[i] != c)
		i++;
	dest = malloc(sizeof(char) * ((ft_strlen(src) - i) + 1));
	if (dest == NULL)
		return (NULL);
	while (src[++i])
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
