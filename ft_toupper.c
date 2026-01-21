/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:28 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/14 17:01:31 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	char	c_char;

	c_char = (char) c;
	if ('a' <= c_char && c_char <= 'z')
	{
		c_char = c_char - 32;
	}
	return (c_char);
}
/*
int	main ()
{
	printf("%c", ft_toupper('a'));
	return (0);
}*/
