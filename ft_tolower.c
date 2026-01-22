/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:02:01 by edsole-a          #+#    #+#             */
/*   Updated: 2026/01/22 20:35:33 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_tolower(int c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	if ('A' <= uc && uc <= 'Z')
	{
		uc = uc + 32;
	}
	return (uc);
}
/*
int	main ()
{
	printf("%c", ft_tolower('A'));
	return (0);
}
*/
