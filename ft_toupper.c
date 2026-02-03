/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:28 by edsole-a          #+#    #+#             */
/*   Updated: 2026/02/03 13:12:34 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*
int	main ()
{
	printf("%c", ft_toupper('a'));
	return (0);
}*/
