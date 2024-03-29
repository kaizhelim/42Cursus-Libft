/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalim <kalim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 23:58:21 by kalim             #+#    #+#             */
/*   Updated: 2021/05/06 23:58:21 by kalim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += ('a' - 'A');
	return (c);
}


/*
** Change an upper case letter (single character) to lower case.
** Otherwise, no changes is made.
*/
