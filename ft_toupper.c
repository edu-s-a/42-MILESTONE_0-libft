/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:28 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/22 20:35:55 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	if ('a' <= uc && uc <= 'z')
	{
		uc = uc - 32;
	}
	return (uc);
}
/*
int	main ()
{
	printf("%c", ft_toupper('a'));
	return (0);
}*/
