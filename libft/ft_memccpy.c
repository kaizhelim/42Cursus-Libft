/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalim <kalim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:01:07 by kalim             #+#    #+#             */
/*   Updated: 2021/05/04 12:01:07 by kalim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)src)[i] != (unsigned char)c && i < count)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (i < count)
	{
		((unsigned char *)dest)[i] = (unsigned char)c;
		return (dest + i + 1);
	}
	return (0);
}
