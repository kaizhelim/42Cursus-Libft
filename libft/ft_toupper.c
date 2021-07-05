/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalim <kalim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 23:56:48 by kalim             #+#    #+#             */
/*   Updated: 2021/05/06 23:56:48 by kalim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}

/*
** Change a lower case letter (single character) to upper case.
** Otherwise, no changes is made.
*/
