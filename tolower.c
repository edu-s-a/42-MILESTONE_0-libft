/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:02:01 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/21 14:03:52 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_tolower(int c)
{
	char	c_char;

	c_char = (char) c;
	if ('A' <= c_char && c_char <= 'Z')
	{
		c_char = c_char + 32;
	}
	return (c_char);
}
/*
int	main ()
{
	printf("%c", ft_tolower('A'));
	return (0);
}
*/
