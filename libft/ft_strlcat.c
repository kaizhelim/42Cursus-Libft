/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalim <kalim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:08:39 by kalim             #+#    #+#             */
/*   Updated: 2021/05/06 17:08:39 by kalim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = 0;
	i = 0;
	while (dst[dstlen] && dstlen < dstsize)
		dstlen++;
	while ((src[i]) && ((dstlen + i + 1) < dstsize))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen != dstsize)
		dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}
